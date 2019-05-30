// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_H_

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
#include "services/network/public/mojom/host_resolver.mojom-shared.h"
#include "services/network/public/mojom/host_resolver.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "services/network/public/mojom/address_list.mojom.h"
#include "services/network/public/mojom/ip_address.mojom.h"
#include "services/network/public/mojom/ip_endpoint.mojom.h"
#include "services/network/public/mojom/network_param.mojom.h"
#include "services/network/public/mojom/url_loader.mojom.h"
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
#include "net/dns/dns_config_overrides.h"
#include "net/dns/host_resolver.h"
#include "net/dns/host_resolver_source.h"
#include "net/dns/public/dns_query_type.h"




namespace network {
namespace mojom {

class ResolveHostHandleProxy;

template <typename ImplRefTraits>
class ResolveHostHandleStub;

class ResolveHostHandleRequestValidator;


class  ResolveHostHandle
    : public ResolveHostHandleInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ResolveHostHandleInterfaceBase;
  using Proxy_ = ResolveHostHandleProxy;

  template <typename ImplRefTraits>
  using Stub_ = ResolveHostHandleStub<ImplRefTraits>;

  using RequestValidator_ = ResolveHostHandleRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCancelMinVersion = 0,
  };
  virtual ~ResolveHostHandle() {}

  
  virtual void Cancel(int32_t result) = 0;
};

class ResolveHostClientProxy;

template <typename ImplRefTraits>
class ResolveHostClientStub;

class ResolveHostClientRequestValidator;


class  ResolveHostClient
    : public ResolveHostClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ResolveHostClientInterfaceBase;
  using Proxy_ = ResolveHostClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ResolveHostClientStub<ImplRefTraits>;

  using RequestValidator_ = ResolveHostClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnCompleteMinVersion = 0,
    kOnTextResultsMinVersion = 0,
    kOnHostnameResultsMinVersion = 0,
  };
  virtual ~ResolveHostClient() {}

  
  virtual void OnComplete(int32_t result, const base::Optional<net::AddressList>& resolved_addresses) = 0;

  
  virtual void OnTextResults(const std::vector<std::string>& text_results) = 0;

  
  virtual void OnHostnameResults(const std::vector<net::HostPortPair>& hosts) = 0;
};

class MdnsListenClientProxy;

template <typename ImplRefTraits>
class MdnsListenClientStub;

class MdnsListenClientRequestValidator;


class  MdnsListenClient
    : public MdnsListenClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MdnsListenClientInterfaceBase;
  using Proxy_ = MdnsListenClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = MdnsListenClientStub<ImplRefTraits>;

  using RequestValidator_ = MdnsListenClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnAddressResultMinVersion = 0,
    kOnTextResultMinVersion = 0,
    kOnHostnameResultMinVersion = 0,
    kOnUnhandledResultMinVersion = 0,
  };
  
  using UpdateType = MdnsListenClient_UpdateType;
  virtual ~MdnsListenClient() {}

  
  virtual void OnAddressResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type, const net::IPEndPoint& endpoint) = 0;

  
  virtual void OnTextResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type, const std::vector<std::string>& text_records) = 0;

  
  virtual void OnHostnameResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type, const net::HostPortPair& host) = 0;

  
  virtual void OnUnhandledResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type) = 0;
};

class HostResolverProxy;

template <typename ImplRefTraits>
class HostResolverStub;

class HostResolverRequestValidator;
class HostResolverResponseValidator;


class  HostResolver
    : public HostResolverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = HostResolverInterfaceBase;
  using Proxy_ = HostResolverProxy;

  template <typename ImplRefTraits>
  using Stub_ = HostResolverStub<ImplRefTraits>;

  using RequestValidator_ = HostResolverRequestValidator;
  using ResponseValidator_ = HostResolverResponseValidator;
  enum MethodMinVersions : uint32_t {
    kResolveHostMinVersion = 0,
    kMdnsListenMinVersion = 0,
  };
  virtual ~HostResolver() {}

  
  virtual void ResolveHost(const net::HostPortPair& host, ResolveHostParametersPtr optional_parameters, ResolveHostClientPtr response_client) = 0;


  using MdnsListenCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void MdnsListen(const net::HostPortPair& host, net::DnsQueryType query_type, MdnsListenClientPtr response_client, MdnsListenCallback callback) = 0;
};

class DnsConfigChangeManagerClientProxy;

template <typename ImplRefTraits>
class DnsConfigChangeManagerClientStub;

class DnsConfigChangeManagerClientRequestValidator;


class  DnsConfigChangeManagerClient
    : public DnsConfigChangeManagerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DnsConfigChangeManagerClientInterfaceBase;
  using Proxy_ = DnsConfigChangeManagerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = DnsConfigChangeManagerClientStub<ImplRefTraits>;

  using RequestValidator_ = DnsConfigChangeManagerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnSystemDnsConfigChangedMinVersion = 0,
  };
  virtual ~DnsConfigChangeManagerClient() {}

  
  virtual void OnSystemDnsConfigChanged() = 0;
};

class DnsConfigChangeManagerProxy;

template <typename ImplRefTraits>
class DnsConfigChangeManagerStub;

class DnsConfigChangeManagerRequestValidator;


class  DnsConfigChangeManager
    : public DnsConfigChangeManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DnsConfigChangeManagerInterfaceBase;
  using Proxy_ = DnsConfigChangeManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = DnsConfigChangeManagerStub<ImplRefTraits>;

  using RequestValidator_ = DnsConfigChangeManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRequestNotificationsMinVersion = 0,
  };
  virtual ~DnsConfigChangeManager() {}

  
  virtual void RequestNotifications(DnsConfigChangeManagerClientPtr client_ptr) = 0;
};

class  ResolveHostHandleProxy
    : public ResolveHostHandle {
 public:
  using InterfaceType = ResolveHostHandle;

  explicit ResolveHostHandleProxy(mojo::MessageReceiverWithResponder* receiver);
  void Cancel(int32_t result) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ResolveHostClientProxy
    : public ResolveHostClient {
 public:
  using InterfaceType = ResolveHostClient;

  explicit ResolveHostClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnComplete(int32_t result, const base::Optional<net::AddressList>& resolved_addresses) final;
  void OnTextResults(const std::vector<std::string>& text_results) final;
  void OnHostnameResults(const std::vector<net::HostPortPair>& hosts) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  MdnsListenClientProxy
    : public MdnsListenClient {
 public:
  using InterfaceType = MdnsListenClient;

  explicit MdnsListenClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnAddressResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type, const net::IPEndPoint& endpoint) final;
  void OnTextResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type, const std::vector<std::string>& text_records) final;
  void OnHostnameResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type, const net::HostPortPair& host) final;
  void OnUnhandledResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  HostResolverProxy
    : public HostResolver {
 public:
  using InterfaceType = HostResolver;

  explicit HostResolverProxy(mojo::MessageReceiverWithResponder* receiver);
  void ResolveHost(const net::HostPortPair& host, ResolveHostParametersPtr optional_parameters, ResolveHostClientPtr response_client) final;
  void MdnsListen(const net::HostPortPair& host, net::DnsQueryType query_type, MdnsListenClientPtr response_client, MdnsListenCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  DnsConfigChangeManagerClientProxy
    : public DnsConfigChangeManagerClient {
 public:
  using InterfaceType = DnsConfigChangeManagerClient;

  explicit DnsConfigChangeManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnSystemDnsConfigChanged() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  DnsConfigChangeManagerProxy
    : public DnsConfigChangeManager {
 public:
  using InterfaceType = DnsConfigChangeManager;

  explicit DnsConfigChangeManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestNotifications(DnsConfigChangeManagerClientPtr client_ptr) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ResolveHostHandleStubDispatch {
 public:
  static bool Accept(ResolveHostHandle* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ResolveHostHandle* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ResolveHostHandle>>
class ResolveHostHandleStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ResolveHostHandleStub() {}
  ~ResolveHostHandleStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResolveHostHandleStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResolveHostHandleStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ResolveHostClientStubDispatch {
 public:
  static bool Accept(ResolveHostClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ResolveHostClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ResolveHostClient>>
class ResolveHostClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ResolveHostClientStub() {}
  ~ResolveHostClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResolveHostClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResolveHostClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MdnsListenClientStubDispatch {
 public:
  static bool Accept(MdnsListenClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MdnsListenClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MdnsListenClient>>
class MdnsListenClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MdnsListenClientStub() {}
  ~MdnsListenClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MdnsListenClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MdnsListenClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  HostResolverStubDispatch {
 public:
  static bool Accept(HostResolver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HostResolver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HostResolver>>
class HostResolverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HostResolverStub() {}
  ~HostResolverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HostResolverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HostResolverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DnsConfigChangeManagerClientStubDispatch {
 public:
  static bool Accept(DnsConfigChangeManagerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DnsConfigChangeManagerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DnsConfigChangeManagerClient>>
class DnsConfigChangeManagerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DnsConfigChangeManagerClientStub() {}
  ~DnsConfigChangeManagerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DnsConfigChangeManagerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DnsConfigChangeManagerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DnsConfigChangeManagerStubDispatch {
 public:
  static bool Accept(DnsConfigChangeManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DnsConfigChangeManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DnsConfigChangeManager>>
class DnsConfigChangeManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DnsConfigChangeManagerStub() {}
  ~DnsConfigChangeManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DnsConfigChangeManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DnsConfigChangeManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ResolveHostHandleRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ResolveHostClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MdnsListenClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  HostResolverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DnsConfigChangeManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DnsConfigChangeManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  HostResolverResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class  DnsOverHttpsServer {
 public:
  using DataView = DnsOverHttpsServerDataView;
  using Data_ = internal::DnsOverHttpsServer_Data;

  template <typename... Args>
  static DnsOverHttpsServerPtr New(Args&&... args) {
    return DnsOverHttpsServerPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DnsOverHttpsServerPtr From(const U& u) {
    return mojo::TypeConverter<DnsOverHttpsServerPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DnsOverHttpsServer>::Convert(*this);
  }


  DnsOverHttpsServer();

  DnsOverHttpsServer(
      const std::string& server_template,
      bool use_post);

  ~DnsOverHttpsServer();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DnsOverHttpsServerPtr>
  DnsOverHttpsServerPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DnsOverHttpsServer>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DnsOverHttpsServer::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DnsOverHttpsServer::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DnsOverHttpsServer_UnserializedMessageContext<
            UserType, DnsOverHttpsServer::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DnsOverHttpsServer::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DnsOverHttpsServer::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DnsOverHttpsServer_UnserializedMessageContext<
            UserType, DnsOverHttpsServer::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DnsOverHttpsServer::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string server_template;
  
  bool use_post;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class  DnsHost {
 public:
  using DataView = DnsHostDataView;
  using Data_ = internal::DnsHost_Data;

  template <typename... Args>
  static DnsHostPtr New(Args&&... args) {
    return DnsHostPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DnsHostPtr From(const U& u) {
    return mojo::TypeConverter<DnsHostPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DnsHost>::Convert(*this);
  }


  DnsHost();

  DnsHost(
      const std::string& hostname,
      const net::IPAddress& address);

  ~DnsHost();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DnsHostPtr>
  DnsHostPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DnsHost>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DnsHost::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DnsHost::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DnsHost_UnserializedMessageContext<
            UserType, DnsHost::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DnsHost::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DnsHost::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DnsHost_UnserializedMessageContext<
            UserType, DnsHost::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DnsHost::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string hostname;
  
  net::IPAddress address;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class  DnsConfigOverrides {
 public:
  using DataView = DnsConfigOverridesDataView;
  using Data_ = internal::DnsConfigOverrides_Data;
  using Tristate = DnsConfigOverrides_Tristate;

  template <typename... Args>
  static DnsConfigOverridesPtr New(Args&&... args) {
    return DnsConfigOverridesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DnsConfigOverridesPtr From(const U& u) {
    return mojo::TypeConverter<DnsConfigOverridesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DnsConfigOverrides>::Convert(*this);
  }


  DnsConfigOverrides();

  DnsConfigOverrides(
      const base::Optional<std::vector<net::IPEndPoint>>& nameservers,
      const base::Optional<std::vector<std::string>>& search,
      base::Optional<std::vector<DnsHostPtr>> hosts,
      DnsConfigOverrides::Tristate append_to_multi_label_name,
      DnsConfigOverrides::Tristate randomize_ports,
      int8_t ndots,
      base::Optional<base::TimeDelta> timeout,
      int32_t attempts,
      DnsConfigOverrides::Tristate rotate,
      DnsConfigOverrides::Tristate use_local_ipv6,
      base::Optional<std::vector<DnsOverHttpsServerPtr>> dns_over_https_servers);

  ~DnsConfigOverrides();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DnsConfigOverridesPtr>
  DnsConfigOverridesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DnsConfigOverrides>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DnsConfigOverrides::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DnsConfigOverrides::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DnsConfigOverrides_UnserializedMessageContext<
            UserType, DnsConfigOverrides::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DnsConfigOverrides::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DnsConfigOverrides::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DnsConfigOverrides_UnserializedMessageContext<
            UserType, DnsConfigOverrides::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DnsConfigOverrides::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::Optional<std::vector<net::IPEndPoint>> nameservers;
  
  base::Optional<std::vector<std::string>> search;
  
  base::Optional<std::vector<DnsHostPtr>> hosts;
  
  DnsConfigOverrides::Tristate append_to_multi_label_name;
  
  DnsConfigOverrides::Tristate randomize_ports;
  
  int8_t ndots;
  
  base::Optional<base::TimeDelta> timeout;
  
  int32_t attempts;
  
  DnsConfigOverrides::Tristate rotate;
  
  DnsConfigOverrides::Tristate use_local_ipv6;
  
  base::Optional<std::vector<DnsOverHttpsServerPtr>> dns_over_https_servers;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DnsConfigOverrides);
};





class  ResolveHostParameters {
 public:
  using DataView = ResolveHostParametersDataView;
  using Data_ = internal::ResolveHostParameters_Data;
  using Source = ResolveHostParameters_Source;

  template <typename... Args>
  static ResolveHostParametersPtr New(Args&&... args) {
    return ResolveHostParametersPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ResolveHostParametersPtr From(const U& u) {
    return mojo::TypeConverter<ResolveHostParametersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ResolveHostParameters>::Convert(*this);
  }


  ResolveHostParameters();

  ResolveHostParameters(
      net::DnsQueryType dns_query_type,
      net::RequestPriority initial_priority,
      net::HostResolverSource source,
      bool allow_cached_response,
      ResolveHostHandleRequest control_handle,
      bool include_canonical_name,
      bool loopback_only,
      bool is_speculative);

  ~ResolveHostParameters();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ResolveHostParametersPtr>
  ResolveHostParametersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ResolveHostParameters>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ResolveHostParameters::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ResolveHostParameters::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ResolveHostParameters_UnserializedMessageContext<
            UserType, ResolveHostParameters::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ResolveHostParameters::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ResolveHostParameters::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ResolveHostParameters_UnserializedMessageContext<
            UserType, ResolveHostParameters::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ResolveHostParameters::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  net::DnsQueryType dns_query_type;
  
  net::RequestPriority initial_priority;
  
  net::HostResolverSource source;
  
  bool allow_cached_response;
  
  ResolveHostHandleRequest control_handle;
  
  bool include_canonical_name;
  
  bool loopback_only;
  
  bool is_speculative;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ResolveHostParameters);
};

template <typename StructPtrType>
DnsHostPtr DnsHost::Clone() const {
  return New(
      mojo::Clone(hostname),
      mojo::Clone(address)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DnsHost>::value>::type*>
bool DnsHost::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->hostname, other_struct.hostname))
    return false;
  if (!mojo::Equals(this->address, other_struct.address))
    return false;
  return true;
}
template <typename StructPtrType>
DnsOverHttpsServerPtr DnsOverHttpsServer::Clone() const {
  return New(
      mojo::Clone(server_template),
      mojo::Clone(use_post)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DnsOverHttpsServer>::value>::type*>
bool DnsOverHttpsServer::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->server_template, other_struct.server_template))
    return false;
  if (!mojo::Equals(this->use_post, other_struct.use_post))
    return false;
  return true;
}
template <typename StructPtrType>
DnsConfigOverridesPtr DnsConfigOverrides::Clone() const {
  return New(
      mojo::Clone(nameservers),
      mojo::Clone(search),
      mojo::Clone(hosts),
      mojo::Clone(append_to_multi_label_name),
      mojo::Clone(randomize_ports),
      mojo::Clone(ndots),
      mojo::Clone(timeout),
      mojo::Clone(attempts),
      mojo::Clone(rotate),
      mojo::Clone(use_local_ipv6),
      mojo::Clone(dns_over_https_servers)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DnsConfigOverrides>::value>::type*>
bool DnsConfigOverrides::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->nameservers, other_struct.nameservers))
    return false;
  if (!mojo::Equals(this->search, other_struct.search))
    return false;
  if (!mojo::Equals(this->hosts, other_struct.hosts))
    return false;
  if (!mojo::Equals(this->append_to_multi_label_name, other_struct.append_to_multi_label_name))
    return false;
  if (!mojo::Equals(this->randomize_ports, other_struct.randomize_ports))
    return false;
  if (!mojo::Equals(this->ndots, other_struct.ndots))
    return false;
  if (!mojo::Equals(this->timeout, other_struct.timeout))
    return false;
  if (!mojo::Equals(this->attempts, other_struct.attempts))
    return false;
  if (!mojo::Equals(this->rotate, other_struct.rotate))
    return false;
  if (!mojo::Equals(this->use_local_ipv6, other_struct.use_local_ipv6))
    return false;
  if (!mojo::Equals(this->dns_over_https_servers, other_struct.dns_over_https_servers))
    return false;
  return true;
}
template <typename StructPtrType>
ResolveHostParametersPtr ResolveHostParameters::Clone() const {
  return New(
      mojo::Clone(dns_query_type),
      mojo::Clone(initial_priority),
      mojo::Clone(source),
      mojo::Clone(allow_cached_response),
      mojo::Clone(control_handle),
      mojo::Clone(include_canonical_name),
      mojo::Clone(loopback_only),
      mojo::Clone(is_speculative)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ResolveHostParameters>::value>::type*>
bool ResolveHostParameters::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->dns_query_type, other_struct.dns_query_type))
    return false;
  if (!mojo::Equals(this->initial_priority, other_struct.initial_priority))
    return false;
  if (!mojo::Equals(this->source, other_struct.source))
    return false;
  if (!mojo::Equals(this->allow_cached_response, other_struct.allow_cached_response))
    return false;
  if (!mojo::Equals(this->control_handle, other_struct.control_handle))
    return false;
  if (!mojo::Equals(this->include_canonical_name, other_struct.include_canonical_name))
    return false;
  if (!mojo::Equals(this->loopback_only, other_struct.loopback_only))
    return false;
  if (!mojo::Equals(this->is_speculative, other_struct.is_speculative))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::DnsHost::DataView,
                                         ::network::mojom::DnsHostPtr> {
  static bool IsNull(const ::network::mojom::DnsHostPtr& input) { return !input; }
  static void SetToNull(::network::mojom::DnsHostPtr* output) { output->reset(); }

  static const decltype(::network::mojom::DnsHost::hostname)& hostname(
      const ::network::mojom::DnsHostPtr& input) {
    return input->hostname;
  }

  static const decltype(::network::mojom::DnsHost::address)& address(
      const ::network::mojom::DnsHostPtr& input) {
    return input->address;
  }

  static bool Read(::network::mojom::DnsHost::DataView input, ::network::mojom::DnsHostPtr* output);
};


template <>
struct  StructTraits<::network::mojom::DnsOverHttpsServer::DataView,
                                         ::network::mojom::DnsOverHttpsServerPtr> {
  static bool IsNull(const ::network::mojom::DnsOverHttpsServerPtr& input) { return !input; }
  static void SetToNull(::network::mojom::DnsOverHttpsServerPtr* output) { output->reset(); }

  static const decltype(::network::mojom::DnsOverHttpsServer::server_template)& server_template(
      const ::network::mojom::DnsOverHttpsServerPtr& input) {
    return input->server_template;
  }

  static decltype(::network::mojom::DnsOverHttpsServer::use_post) use_post(
      const ::network::mojom::DnsOverHttpsServerPtr& input) {
    return input->use_post;
  }

  static bool Read(::network::mojom::DnsOverHttpsServer::DataView input, ::network::mojom::DnsOverHttpsServerPtr* output);
};


template <>
struct  StructTraits<::network::mojom::DnsConfigOverrides::DataView,
                                         ::network::mojom::DnsConfigOverridesPtr> {
  static bool IsNull(const ::network::mojom::DnsConfigOverridesPtr& input) { return !input; }
  static void SetToNull(::network::mojom::DnsConfigOverridesPtr* output) { output->reset(); }

  static const decltype(::network::mojom::DnsConfigOverrides::nameservers)& nameservers(
      const ::network::mojom::DnsConfigOverridesPtr& input) {
    return input->nameservers;
  }

  static const decltype(::network::mojom::DnsConfigOverrides::search)& search(
      const ::network::mojom::DnsConfigOverridesPtr& input) {
    return input->search;
  }

  static const decltype(::network::mojom::DnsConfigOverrides::hosts)& hosts(
      const ::network::mojom::DnsConfigOverridesPtr& input) {
    return input->hosts;
  }

  static decltype(::network::mojom::DnsConfigOverrides::append_to_multi_label_name) append_to_multi_label_name(
      const ::network::mojom::DnsConfigOverridesPtr& input) {
    return input->append_to_multi_label_name;
  }

  static decltype(::network::mojom::DnsConfigOverrides::randomize_ports) randomize_ports(
      const ::network::mojom::DnsConfigOverridesPtr& input) {
    return input->randomize_ports;
  }

  static decltype(::network::mojom::DnsConfigOverrides::ndots) ndots(
      const ::network::mojom::DnsConfigOverridesPtr& input) {
    return input->ndots;
  }

  static const decltype(::network::mojom::DnsConfigOverrides::timeout)& timeout(
      const ::network::mojom::DnsConfigOverridesPtr& input) {
    return input->timeout;
  }

  static decltype(::network::mojom::DnsConfigOverrides::attempts) attempts(
      const ::network::mojom::DnsConfigOverridesPtr& input) {
    return input->attempts;
  }

  static decltype(::network::mojom::DnsConfigOverrides::rotate) rotate(
      const ::network::mojom::DnsConfigOverridesPtr& input) {
    return input->rotate;
  }

  static decltype(::network::mojom::DnsConfigOverrides::use_local_ipv6) use_local_ipv6(
      const ::network::mojom::DnsConfigOverridesPtr& input) {
    return input->use_local_ipv6;
  }

  static const decltype(::network::mojom::DnsConfigOverrides::dns_over_https_servers)& dns_over_https_servers(
      const ::network::mojom::DnsConfigOverridesPtr& input) {
    return input->dns_over_https_servers;
  }

  static bool Read(::network::mojom::DnsConfigOverrides::DataView input, ::network::mojom::DnsConfigOverridesPtr* output);
};


template <>
struct  StructTraits<::network::mojom::ResolveHostParameters::DataView,
                                         ::network::mojom::ResolveHostParametersPtr> {
  static bool IsNull(const ::network::mojom::ResolveHostParametersPtr& input) { return !input; }
  static void SetToNull(::network::mojom::ResolveHostParametersPtr* output) { output->reset(); }

  static decltype(::network::mojom::ResolveHostParameters::dns_query_type) dns_query_type(
      const ::network::mojom::ResolveHostParametersPtr& input) {
    return input->dns_query_type;
  }

  static decltype(::network::mojom::ResolveHostParameters::initial_priority) initial_priority(
      const ::network::mojom::ResolveHostParametersPtr& input) {
    return input->initial_priority;
  }

  static decltype(::network::mojom::ResolveHostParameters::source) source(
      const ::network::mojom::ResolveHostParametersPtr& input) {
    return input->source;
  }

  static decltype(::network::mojom::ResolveHostParameters::allow_cached_response) allow_cached_response(
      const ::network::mojom::ResolveHostParametersPtr& input) {
    return input->allow_cached_response;
  }

  static  decltype(::network::mojom::ResolveHostParameters::control_handle)& control_handle(
       ::network::mojom::ResolveHostParametersPtr& input) {
    return input->control_handle;
  }

  static decltype(::network::mojom::ResolveHostParameters::include_canonical_name) include_canonical_name(
      const ::network::mojom::ResolveHostParametersPtr& input) {
    return input->include_canonical_name;
  }

  static decltype(::network::mojom::ResolveHostParameters::loopback_only) loopback_only(
      const ::network::mojom::ResolveHostParametersPtr& input) {
    return input->loopback_only;
  }

  static decltype(::network::mojom::ResolveHostParameters::is_speculative) is_speculative(
      const ::network::mojom::ResolveHostParametersPtr& input) {
    return input->is_speculative;
  }

  static bool Read(::network::mojom::ResolveHostParameters::DataView input, ::network::mojom::ResolveHostParametersPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_H_
