// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_H_
#define SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_H_

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
#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-shared.h"
#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-forward.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/ip_address.mojom.h"
#endif // ENABLE_GNET
#include "url/mojom/url.mojom.h"
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
#include "net/base/proxy_server.h"
#include "net/proxy_resolution/proxy_info.h"
#include "net/proxy_resolution/proxy_resolve_dns_operation.h"




namespace proxy_resolver {
namespace mojom {

class HostResolverRequestClientProxy;

template <typename ImplRefTraits>
class HostResolverRequestClientStub;

class HostResolverRequestClientRequestValidator;


class  HostResolverRequestClient
    : public HostResolverRequestClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = HostResolverRequestClientInterfaceBase;
  using Proxy_ = HostResolverRequestClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = HostResolverRequestClientStub<ImplRefTraits>;

  using RequestValidator_ = HostResolverRequestClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kReportResultMinVersion = 0,
  };
  virtual ~HostResolverRequestClient() {}

  
  virtual void ReportResult(int32_t error, const std::vector<net::IPAddress>& result) = 0;
};

class ProxyResolverProxy;

template <typename ImplRefTraits>
class ProxyResolverStub;

class ProxyResolverRequestValidator;


class  ProxyResolver
    : public ProxyResolverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProxyResolverInterfaceBase;
  using Proxy_ = ProxyResolverProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProxyResolverStub<ImplRefTraits>;

  using RequestValidator_ = ProxyResolverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGetProxyForUrlMinVersion = 0,
  };
  virtual ~ProxyResolver() {}

  
  virtual void GetProxyForUrl(const GURL& url, ProxyResolverRequestClientPtr client) = 0;
};

class ProxyResolverRequestClientProxy;

template <typename ImplRefTraits>
class ProxyResolverRequestClientStub;

class ProxyResolverRequestClientRequestValidator;


class  ProxyResolverRequestClient
    : public ProxyResolverRequestClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProxyResolverRequestClientInterfaceBase;
  using Proxy_ = ProxyResolverRequestClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProxyResolverRequestClientStub<ImplRefTraits>;

  using RequestValidator_ = ProxyResolverRequestClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kReportResultMinVersion = 0,
    kAlertMinVersion = 0,
    kOnErrorMinVersion = 0,
    kResolveDnsMinVersion = 0,
  };
  virtual ~ProxyResolverRequestClient() {}

  
  virtual void ReportResult(int32_t error, const net::ProxyInfo& proxy_info) = 0;

  
  virtual void Alert(const std::string& error) = 0;

  
  virtual void OnError(int32_t line_number, const std::string& error) = 0;

  
  virtual void ResolveDns(const std::string& host, net::ProxyResolveDnsOperation operation, HostResolverRequestClientPtr client) = 0;
};

class ProxyResolverFactoryProxy;

template <typename ImplRefTraits>
class ProxyResolverFactoryStub;

class ProxyResolverFactoryRequestValidator;


class  ProxyResolverFactory
    : public ProxyResolverFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProxyResolverFactoryInterfaceBase;
  using Proxy_ = ProxyResolverFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProxyResolverFactoryStub<ImplRefTraits>;

  using RequestValidator_ = ProxyResolverFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateResolverMinVersion = 0,
  };
  virtual ~ProxyResolverFactory() {}

  
  virtual void CreateResolver(const std::string& pac_script, ProxyResolverRequest resolver, ProxyResolverFactoryRequestClientPtr client) = 0;
};

class ProxyResolverFactoryRequestClientProxy;

template <typename ImplRefTraits>
class ProxyResolverFactoryRequestClientStub;

class ProxyResolverFactoryRequestClientRequestValidator;


class  ProxyResolverFactoryRequestClient
    : public ProxyResolverFactoryRequestClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProxyResolverFactoryRequestClientInterfaceBase;
  using Proxy_ = ProxyResolverFactoryRequestClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProxyResolverFactoryRequestClientStub<ImplRefTraits>;

  using RequestValidator_ = ProxyResolverFactoryRequestClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kReportResultMinVersion = 0,
    kAlertMinVersion = 0,
    kOnErrorMinVersion = 0,
    kResolveDnsMinVersion = 0,
  };
  virtual ~ProxyResolverFactoryRequestClient() {}

  
  virtual void ReportResult(int32_t error) = 0;

  
  virtual void Alert(const std::string& error) = 0;

  
  virtual void OnError(int32_t line_number, const std::string& error) = 0;

  
  virtual void ResolveDns(const std::string& host, net::ProxyResolveDnsOperation operation, HostResolverRequestClientPtr client) = 0;
};

class  HostResolverRequestClientProxy
    : public HostResolverRequestClient {
 public:
  using InterfaceType = HostResolverRequestClient;

  explicit HostResolverRequestClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void ReportResult(int32_t error, const std::vector<net::IPAddress>& result) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ProxyResolverProxy
    : public ProxyResolver {
 public:
  using InterfaceType = ProxyResolver;

  explicit ProxyResolverProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetProxyForUrl(const GURL& url, ProxyResolverRequestClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ProxyResolverRequestClientProxy
    : public ProxyResolverRequestClient {
 public:
  using InterfaceType = ProxyResolverRequestClient;

  explicit ProxyResolverRequestClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void ReportResult(int32_t error, const net::ProxyInfo& proxy_info) final;
  void Alert(const std::string& error) final;
  void OnError(int32_t line_number, const std::string& error) final;
  void ResolveDns(const std::string& host, net::ProxyResolveDnsOperation operation, HostResolverRequestClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ProxyResolverFactoryProxy
    : public ProxyResolverFactory {
 public:
  using InterfaceType = ProxyResolverFactory;

  explicit ProxyResolverFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateResolver(const std::string& pac_script, ProxyResolverRequest resolver, ProxyResolverFactoryRequestClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ProxyResolverFactoryRequestClientProxy
    : public ProxyResolverFactoryRequestClient {
 public:
  using InterfaceType = ProxyResolverFactoryRequestClient;

  explicit ProxyResolverFactoryRequestClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void ReportResult(int32_t error) final;
  void Alert(const std::string& error) final;
  void OnError(int32_t line_number, const std::string& error) final;
  void ResolveDns(const std::string& host, net::ProxyResolveDnsOperation operation, HostResolverRequestClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  HostResolverRequestClientStubDispatch {
 public:
  static bool Accept(HostResolverRequestClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HostResolverRequestClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HostResolverRequestClient>>
class HostResolverRequestClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HostResolverRequestClientStub() {}
  ~HostResolverRequestClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HostResolverRequestClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HostResolverRequestClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProxyResolverStubDispatch {
 public:
  static bool Accept(ProxyResolver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProxyResolver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProxyResolver>>
class ProxyResolverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProxyResolverStub() {}
  ~ProxyResolverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyResolverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyResolverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProxyResolverRequestClientStubDispatch {
 public:
  static bool Accept(ProxyResolverRequestClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProxyResolverRequestClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProxyResolverRequestClient>>
class ProxyResolverRequestClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProxyResolverRequestClientStub() {}
  ~ProxyResolverRequestClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyResolverRequestClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyResolverRequestClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProxyResolverFactoryStubDispatch {
 public:
  static bool Accept(ProxyResolverFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProxyResolverFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProxyResolverFactory>>
class ProxyResolverFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProxyResolverFactoryStub() {}
  ~ProxyResolverFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyResolverFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyResolverFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProxyResolverFactoryRequestClientStubDispatch {
 public:
  static bool Accept(ProxyResolverFactoryRequestClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProxyResolverFactoryRequestClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProxyResolverFactoryRequestClient>>
class ProxyResolverFactoryRequestClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProxyResolverFactoryRequestClientStub() {}
  ~ProxyResolverFactoryRequestClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyResolverFactoryRequestClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyResolverFactoryRequestClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  HostResolverRequestClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProxyResolverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProxyResolverRequestClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProxyResolverFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProxyResolverFactoryRequestClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  ProxyServer {
 public:
  using DataView = ProxyServerDataView;
  using Data_ = internal::ProxyServer_Data;

  template <typename... Args>
  static ProxyServerPtr New(Args&&... args) {
    return ProxyServerPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ProxyServerPtr From(const U& u) {
    return mojo::TypeConverter<ProxyServerPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProxyServer>::Convert(*this);
  }


  ProxyServer();

  ProxyServer(
      ProxyScheme scheme,
      const std::string& host,
      uint16_t port);

  ~ProxyServer();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ProxyServerPtr>
  ProxyServerPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ProxyServer>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ProxyServer::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ProxyServer::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ProxyServer_UnserializedMessageContext<
            UserType, ProxyServer::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ProxyServer::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ProxyServer::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ProxyServer_UnserializedMessageContext<
            UserType, ProxyServer::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ProxyServer::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ProxyScheme scheme;
  
  std::string host;
  
  uint16_t port;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class  ProxyInfo {
 public:
  using DataView = ProxyInfoDataView;
  using Data_ = internal::ProxyInfo_Data;

  template <typename... Args>
  static ProxyInfoPtr New(Args&&... args) {
    return ProxyInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ProxyInfoPtr From(const U& u) {
    return mojo::TypeConverter<ProxyInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProxyInfo>::Convert(*this);
  }


  ProxyInfo();

  explicit ProxyInfo(
      const std::vector<net::ProxyServer>& proxy_servers);

  ~ProxyInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ProxyInfoPtr>
  ProxyInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ProxyInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ProxyInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ProxyInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ProxyInfo_UnserializedMessageContext<
            UserType, ProxyInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ProxyInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ProxyInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ProxyInfo_UnserializedMessageContext<
            UserType, ProxyInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ProxyInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<net::ProxyServer> proxy_servers;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ProxyServerPtr ProxyServer::Clone() const {
  return New(
      mojo::Clone(scheme),
      mojo::Clone(host),
      mojo::Clone(port)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ProxyServer>::value>::type*>
bool ProxyServer::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->scheme, other_struct.scheme))
    return false;
  if (!mojo::Equals(this->host, other_struct.host))
    return false;
  if (!mojo::Equals(this->port, other_struct.port))
    return false;
  return true;
}
template <typename StructPtrType>
ProxyInfoPtr ProxyInfo::Clone() const {
  return New(
      mojo::Clone(proxy_servers)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ProxyInfo>::value>::type*>
bool ProxyInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->proxy_servers, other_struct.proxy_servers))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace proxy_resolver

namespace mojo {


template <>
struct  StructTraits<::proxy_resolver::mojom::ProxyServer::DataView,
                                         ::proxy_resolver::mojom::ProxyServerPtr> {
  static bool IsNull(const ::proxy_resolver::mojom::ProxyServerPtr& input) { return !input; }
  static void SetToNull(::proxy_resolver::mojom::ProxyServerPtr* output) { output->reset(); }

  static decltype(::proxy_resolver::mojom::ProxyServer::scheme) scheme(
      const ::proxy_resolver::mojom::ProxyServerPtr& input) {
    return input->scheme;
  }

  static const decltype(::proxy_resolver::mojom::ProxyServer::host)& host(
      const ::proxy_resolver::mojom::ProxyServerPtr& input) {
    return input->host;
  }

  static decltype(::proxy_resolver::mojom::ProxyServer::port) port(
      const ::proxy_resolver::mojom::ProxyServerPtr& input) {
    return input->port;
  }

  static bool Read(::proxy_resolver::mojom::ProxyServer::DataView input, ::proxy_resolver::mojom::ProxyServerPtr* output);
};


template <>
struct  StructTraits<::proxy_resolver::mojom::ProxyInfo::DataView,
                                         ::proxy_resolver::mojom::ProxyInfoPtr> {
  static bool IsNull(const ::proxy_resolver::mojom::ProxyInfoPtr& input) { return !input; }
  static void SetToNull(::proxy_resolver::mojom::ProxyInfoPtr* output) { output->reset(); }

  static const decltype(::proxy_resolver::mojom::ProxyInfo::proxy_servers)& proxy_servers(
      const ::proxy_resolver::mojom::ProxyInfoPtr& input) {
    return input->proxy_servers;
  }

  static bool Read(::proxy_resolver::mojom::ProxyInfo::DataView input, ::proxy_resolver::mojom::ProxyInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_H_
