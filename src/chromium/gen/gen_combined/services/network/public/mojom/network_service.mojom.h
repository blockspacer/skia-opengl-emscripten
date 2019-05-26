// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_H_

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
#include "services/network/public/mojom/network_service.mojom-shared.h"
#include "services/network/public/mojom/network_service.mojom-forward.h"
#include "mojo/public/mojom/base/file.mojom.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/memory_pressure_level.mojom.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "mojo/public/mojom/base/values.mojom.h"
#include "services/network/public/mojom/cookie_manager.mojom.h"
#include "services/network/public/mojom/host_resolver.mojom.h"
#include "services/network/public/mojom/net_log.mojom.h"
#include "services/network/public/mojom/network_change_manager.mojom.h"
#include "services/network/public/mojom/network_context.mojom.h"
#include "services/network/public/mojom/network_interface.mojom.h"
#include "services/network/public/mojom/network_param.mojom.h"
#include "services/network/public/mojom/network_quality_estimator_manager.mojom.h"
#include "services/network/public/mojom/url_loader.mojom.h"
#include "services/network/public/mojom/url_loader_factory.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"
#include "services/network/public/mojom/signed_tree_head.mojom.h"
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

class SSLPrivateKeyProxy;

template <typename ImplRefTraits>
class SSLPrivateKeyStub;

class SSLPrivateKeyRequestValidator;
class SSLPrivateKeyResponseValidator;


class  SSLPrivateKey
    : public SSLPrivateKeyInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SSLPrivateKeyInterfaceBase;
  using Proxy_ = SSLPrivateKeyProxy;

  template <typename ImplRefTraits>
  using Stub_ = SSLPrivateKeyStub<ImplRefTraits>;

  using RequestValidator_ = SSLPrivateKeyRequestValidator;
  using ResponseValidator_ = SSLPrivateKeyResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSignMinVersion = 0,
  };
  virtual ~SSLPrivateKey() {}


  using SignCallback = base::OnceCallback<void(int32_t, const std::vector<uint8_t>&)>;
  
  virtual void Sign(uint16_t algorithm, const std::vector<uint8_t>& input, SignCallback callback) = 0;
};

class AuthChallengeResponderProxy;

template <typename ImplRefTraits>
class AuthChallengeResponderStub;

class AuthChallengeResponderRequestValidator;


class  AuthChallengeResponder
    : public AuthChallengeResponderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AuthChallengeResponderInterfaceBase;
  using Proxy_ = AuthChallengeResponderProxy;

  template <typename ImplRefTraits>
  using Stub_ = AuthChallengeResponderStub<ImplRefTraits>;

  using RequestValidator_ = AuthChallengeResponderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnAuthCredentialsMinVersion = 0,
  };
  virtual ~AuthChallengeResponder() {}

  
  virtual void OnAuthCredentials(const base::Optional<net::AuthCredentials>& credentials) = 0;
};

class NetworkServiceClientProxy;

template <typename ImplRefTraits>
class NetworkServiceClientStub;

class NetworkServiceClientRequestValidator;
class NetworkServiceClientResponseValidator;


class  NetworkServiceClient
    : public NetworkServiceClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = NetworkServiceClientInterfaceBase;
  using Proxy_ = NetworkServiceClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetworkServiceClientStub<ImplRefTraits>;

  using RequestValidator_ = NetworkServiceClientRequestValidator;
  using ResponseValidator_ = NetworkServiceClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnAuthRequiredMinVersion = 0,
    kOnCertificateRequestedMinVersion = 0,
    kOnSSLCertificateErrorMinVersion = 0,
    kOnFileUploadRequestedMinVersion = 0,
    kOnCookieChangeMinVersion = 0,
    kOnCookiesReadMinVersion = 0,
    kOnLoadingStateUpdateMinVersion = 0,
    kOnClearSiteDataMinVersion = 0,
    kOnDataUseUpdateMinVersion = 0,
  };
  virtual ~NetworkServiceClient() {}

  
  virtual void OnAuthRequired(uint32_t process_id, uint32_t routing_id, uint32_t request_id, const GURL& url, bool first_auth_attempt, const net::AuthChallengeInfo& auth_info, const base::Optional<network::ResourceResponseHead>& head, AuthChallengeResponderPtr auth_challenge_responder) = 0;


  using OnCertificateRequestedCallback = base::OnceCallback<void(const scoped_refptr<net::X509Certificate>&, const std::string&, const std::vector<uint16_t>&, SSLPrivateKeyPtr, bool)>;
  
  virtual void OnCertificateRequested(const base::Optional<base::UnguessableToken>& window_id, uint32_t process_id, uint32_t routing_id, uint32_t request_id, const scoped_refptr<net::SSLCertRequestInfo>& cert_info, OnCertificateRequestedCallback callback) = 0;


  using OnSSLCertificateErrorCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void OnSSLCertificateError(uint32_t process_id, uint32_t routing_id, const GURL& url, int32_t net_error, const net::SSLInfo& ssl_info, bool fatal, OnSSLCertificateErrorCallback callback) = 0;


  using OnFileUploadRequestedCallback = base::OnceCallback<void(int32_t, std::vector<base::File>)>;
  
  virtual void OnFileUploadRequested(uint32_t process_id, bool async, const std::vector<base::FilePath>& file_paths, OnFileUploadRequestedCallback callback) = 0;

  
  virtual void OnCookieChange(int32_t process_id, int32_t routing_id, const GURL& url, const GURL& frame_url, const net::CanonicalCookie& cookie, bool blocked_by_policy) = 0;

  
  virtual void OnCookiesRead(int32_t process_id, int32_t routing_id, const GURL& url, const GURL& frame_url, const std::vector<net::CanonicalCookie>& cookie_list, bool blocked_by_policy) = 0;


  using OnLoadingStateUpdateCallback = base::OnceCallback<void()>;
  
  virtual void OnLoadingStateUpdate(std::vector<LoadInfoPtr> infos, OnLoadingStateUpdateCallback callback) = 0;


  using OnClearSiteDataCallback = base::OnceCallback<void()>;
  
  virtual void OnClearSiteData(int32_t process_id, int32_t routing_id, const GURL& url, const std::string& header_value, int32_t load_flags, OnClearSiteDataCallback callback) = 0;

  
  virtual void OnDataUseUpdate(int32_t network_traffic_annotation_id_hash, int64_t recv_bytes, int64_t sent_bytes) = 0;
};

class NetworkServiceProxy;

template <typename ImplRefTraits>
class NetworkServiceStub;

class NetworkServiceRequestValidator;
class NetworkServiceResponseValidator;


class  NetworkService
    : public NetworkServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = NetworkServiceInterfaceBase;
  using Proxy_ = NetworkServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetworkServiceStub<ImplRefTraits>;

  using RequestValidator_ = NetworkServiceRequestValidator;
  using ResponseValidator_ = NetworkServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetClientMinVersion = 0,
    kStartNetLogMinVersion = 0,
    kSetSSLKeyLogFileMinVersion = 0,
    kCreateNetworkContextMinVersion = 0,
    kConfigureStubHostResolverMinVersion = 0,
    kDisableQuicMinVersion = 0,
    kSetUpHttpAuthMinVersion = 0,
    kConfigureHttpAuthPrefsMinVersion = 0,
    kSetRawHeadersAccessMinVersion = 0,
    kGetNetworkChangeManagerMinVersion = 0,
    kGetNetworkQualityEstimatorManagerMinVersion = 0,
    kGetDnsConfigChangeManagerMinVersion = 0,
    kGetTotalNetworkUsagesMinVersion = 0,
    kGetNetworkListMinVersion = 0,
    kUpdateSignedTreeHeadMinVersion = 0,
    kUpdateCRLSetMinVersion = 0,
    kOnCertDBChangedMinVersion = 0,
    kSetCryptConfigMinVersion = 0,
    kAddCorbExceptionForPluginMinVersion = 0,
    kRemoveCorbExceptionForPluginMinVersion = 0,
    kOnMemoryPressureMinVersion = 0,
    kSetEnvironmentMinVersion = 0,
  };
  virtual ~NetworkService() {}

  
  virtual void SetClient(NetworkServiceClientPtr client, NetworkServiceParamsPtr params) = 0;

  
  virtual void StartNetLog(base::File file, ::network::mojom::NetLogCaptureMode capture_mode, base::Value constants) = 0;

  
  virtual void SetSSLKeyLogFile(const base::FilePath& file) = 0;

  
  virtual void CreateNetworkContext(::network::mojom::NetworkContextRequest context, ::network::mojom::NetworkContextParamsPtr params) = 0;

  
  virtual void ConfigureStubHostResolver(bool stub_resolver_enabled, base::Optional<std::vector<::network::mojom::DnsOverHttpsServerPtr>> dns_over_https_servers) = 0;

  
  virtual void DisableQuic() = 0;

  
  virtual void SetUpHttpAuth(HttpAuthStaticParamsPtr http_auth_static_params) = 0;

  
  virtual void ConfigureHttpAuthPrefs(HttpAuthDynamicParamsPtr http_auth_dynamic_params) = 0;

  
  virtual void SetRawHeadersAccess(uint32_t process_id, const std::vector<url::Origin>& origins) = 0;

  
  virtual void GetNetworkChangeManager(::network::mojom::NetworkChangeManagerRequest network_change_manager) = 0;

  
  virtual void GetNetworkQualityEstimatorManager(::network::mojom::NetworkQualityEstimatorManagerRequest network_quality_estimator_manager) = 0;

  
  virtual void GetDnsConfigChangeManager(::network::mojom::DnsConfigChangeManagerRequest dns_config_change_manager) = 0;


  using GetTotalNetworkUsagesCallback = base::OnceCallback<void(std::vector<::network::mojom::NetworkUsagePtr>)>;
  
  virtual void GetTotalNetworkUsages(GetTotalNetworkUsagesCallback callback) = 0;


  using GetNetworkListCallback = base::OnceCallback<void(const base::Optional<std::vector<net::NetworkInterface>>&)>;
  
  virtual void GetNetworkList(uint32_t policy, GetNetworkListCallback callback) = 0;

  
  virtual void UpdateSignedTreeHead(const net::ct::SignedTreeHead& signed_tree_head) = 0;

  
  virtual void UpdateCRLSet(base::span<const uint8_t> crl_set) = 0;

  
  virtual void OnCertDBChanged() = 0;

  
  virtual void SetCryptConfig(CryptConfigPtr crypt_config) = 0;

  
  virtual void AddCorbExceptionForPlugin(uint32_t process_id) = 0;

  
  virtual void RemoveCorbExceptionForPlugin(uint32_t process_id) = 0;

  
  virtual void OnMemoryPressure(base::MemoryPressureListener::MemoryPressureLevel memory_pressure_level) = 0;

  
  virtual void SetEnvironment(std::vector<EnvironmentVariablePtr> environment) = 0;
};

class  SSLPrivateKeyProxy
    : public SSLPrivateKey {
 public:
  using InterfaceType = SSLPrivateKey;

  explicit SSLPrivateKeyProxy(mojo::MessageReceiverWithResponder* receiver);
  void Sign(uint16_t algorithm, const std::vector<uint8_t>& input, SignCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  AuthChallengeResponderProxy
    : public AuthChallengeResponder {
 public:
  using InterfaceType = AuthChallengeResponder;

  explicit AuthChallengeResponderProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnAuthCredentials(const base::Optional<net::AuthCredentials>& credentials) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  NetworkServiceClientProxy
    : public NetworkServiceClient {
 public:
  using InterfaceType = NetworkServiceClient;

  explicit NetworkServiceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnAuthRequired(uint32_t process_id, uint32_t routing_id, uint32_t request_id, const GURL& url, bool first_auth_attempt, const net::AuthChallengeInfo& auth_info, const base::Optional<network::ResourceResponseHead>& head, AuthChallengeResponderPtr auth_challenge_responder) final;
  void OnCertificateRequested(const base::Optional<base::UnguessableToken>& window_id, uint32_t process_id, uint32_t routing_id, uint32_t request_id, const scoped_refptr<net::SSLCertRequestInfo>& cert_info, OnCertificateRequestedCallback callback) final;
  void OnSSLCertificateError(uint32_t process_id, uint32_t routing_id, const GURL& url, int32_t net_error, const net::SSLInfo& ssl_info, bool fatal, OnSSLCertificateErrorCallback callback) final;
  void OnFileUploadRequested(uint32_t process_id, bool async, const std::vector<base::FilePath>& file_paths, OnFileUploadRequestedCallback callback) final;
  void OnCookieChange(int32_t process_id, int32_t routing_id, const GURL& url, const GURL& frame_url, const net::CanonicalCookie& cookie, bool blocked_by_policy) final;
  void OnCookiesRead(int32_t process_id, int32_t routing_id, const GURL& url, const GURL& frame_url, const std::vector<net::CanonicalCookie>& cookie_list, bool blocked_by_policy) final;
  void OnLoadingStateUpdate(std::vector<LoadInfoPtr> infos, OnLoadingStateUpdateCallback callback) final;
  void OnClearSiteData(int32_t process_id, int32_t routing_id, const GURL& url, const std::string& header_value, int32_t load_flags, OnClearSiteDataCallback callback) final;
  void OnDataUseUpdate(int32_t network_traffic_annotation_id_hash, int64_t recv_bytes, int64_t sent_bytes) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  NetworkServiceProxy
    : public NetworkService {
 public:
  using InterfaceType = NetworkService;

  explicit NetworkServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(NetworkServiceClientPtr client, NetworkServiceParamsPtr params) final;
  void StartNetLog(base::File file, ::network::mojom::NetLogCaptureMode capture_mode, base::Value constants) final;
  void SetSSLKeyLogFile(const base::FilePath& file) final;
  void CreateNetworkContext(::network::mojom::NetworkContextRequest context, ::network::mojom::NetworkContextParamsPtr params) final;
  void ConfigureStubHostResolver(bool stub_resolver_enabled, base::Optional<std::vector<::network::mojom::DnsOverHttpsServerPtr>> dns_over_https_servers) final;
  void DisableQuic() final;
  void SetUpHttpAuth(HttpAuthStaticParamsPtr http_auth_static_params) final;
  void ConfigureHttpAuthPrefs(HttpAuthDynamicParamsPtr http_auth_dynamic_params) final;
  void SetRawHeadersAccess(uint32_t process_id, const std::vector<url::Origin>& origins) final;
  void GetNetworkChangeManager(::network::mojom::NetworkChangeManagerRequest network_change_manager) final;
  void GetNetworkQualityEstimatorManager(::network::mojom::NetworkQualityEstimatorManagerRequest network_quality_estimator_manager) final;
  void GetDnsConfigChangeManager(::network::mojom::DnsConfigChangeManagerRequest dns_config_change_manager) final;
  void GetTotalNetworkUsages(GetTotalNetworkUsagesCallback callback) final;
  void GetNetworkList(uint32_t policy, GetNetworkListCallback callback) final;
  void UpdateSignedTreeHead(const net::ct::SignedTreeHead& signed_tree_head) final;
  void UpdateCRLSet(base::span<const uint8_t> crl_set) final;
  void OnCertDBChanged() final;
  void SetCryptConfig(CryptConfigPtr crypt_config) final;
  void AddCorbExceptionForPlugin(uint32_t process_id) final;
  void RemoveCorbExceptionForPlugin(uint32_t process_id) final;
  void OnMemoryPressure(base::MemoryPressureListener::MemoryPressureLevel memory_pressure_level) final;
  void SetEnvironment(std::vector<EnvironmentVariablePtr> environment) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  SSLPrivateKeyStubDispatch {
 public:
  static bool Accept(SSLPrivateKey* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SSLPrivateKey* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SSLPrivateKey>>
class SSLPrivateKeyStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SSLPrivateKeyStub() {}
  ~SSLPrivateKeyStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SSLPrivateKeyStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SSLPrivateKeyStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AuthChallengeResponderStubDispatch {
 public:
  static bool Accept(AuthChallengeResponder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AuthChallengeResponder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AuthChallengeResponder>>
class AuthChallengeResponderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AuthChallengeResponderStub() {}
  ~AuthChallengeResponderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AuthChallengeResponderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AuthChallengeResponderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NetworkServiceClientStubDispatch {
 public:
  static bool Accept(NetworkServiceClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetworkServiceClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetworkServiceClient>>
class NetworkServiceClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetworkServiceClientStub() {}
  ~NetworkServiceClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkServiceClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkServiceClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NetworkServiceStubDispatch {
 public:
  static bool Accept(NetworkService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetworkService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetworkService>>
class NetworkServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetworkServiceStub() {}
  ~NetworkServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SSLPrivateKeyRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AuthChallengeResponderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NetworkServiceClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NetworkServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SSLPrivateKeyResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NetworkServiceClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NetworkServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class  EnvironmentVariable {
 public:
  using DataView = EnvironmentVariableDataView;
  using Data_ = internal::EnvironmentVariable_Data;

  template <typename... Args>
  static EnvironmentVariablePtr New(Args&&... args) {
    return EnvironmentVariablePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EnvironmentVariablePtr From(const U& u) {
    return mojo::TypeConverter<EnvironmentVariablePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EnvironmentVariable>::Convert(*this);
  }


  EnvironmentVariable();

  EnvironmentVariable(
      const std::string& name,
      const std::string& value);

  ~EnvironmentVariable();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EnvironmentVariablePtr>
  EnvironmentVariablePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EnvironmentVariable>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        EnvironmentVariable::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        EnvironmentVariable::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::EnvironmentVariable_UnserializedMessageContext<
            UserType, EnvironmentVariable::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<EnvironmentVariable::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return EnvironmentVariable::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::EnvironmentVariable_UnserializedMessageContext<
            UserType, EnvironmentVariable::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<EnvironmentVariable::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string name;
  
  std::string value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class  LoadInfo {
 public:
  using DataView = LoadInfoDataView;
  using Data_ = internal::LoadInfo_Data;

  template <typename... Args>
  static LoadInfoPtr New(Args&&... args) {
    return LoadInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LoadInfoPtr From(const U& u) {
    return mojo::TypeConverter<LoadInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LoadInfo>::Convert(*this);
  }


  LoadInfo();

  LoadInfo(
      uint32_t process_id,
      uint32_t routing_id,
      const std::string& host,
      uint32_t load_state,
      const base::string16& state_param,
      uint64_t upload_position,
      uint64_t upload_size);

  ~LoadInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LoadInfoPtr>
  LoadInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LoadInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LoadInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LoadInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LoadInfo_UnserializedMessageContext<
            UserType, LoadInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LoadInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return LoadInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LoadInfo_UnserializedMessageContext<
            UserType, LoadInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LoadInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t process_id;
  
  uint32_t routing_id;
  
  std::string host;
  
  uint32_t load_state;
  
  base::string16 state_param;
  
  uint64_t upload_position;
  
  uint64_t upload_size;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  HttpAuthStaticParams {
 public:
  using DataView = HttpAuthStaticParamsDataView;
  using Data_ = internal::HttpAuthStaticParams_Data;

  template <typename... Args>
  static HttpAuthStaticParamsPtr New(Args&&... args) {
    return HttpAuthStaticParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HttpAuthStaticParamsPtr From(const U& u) {
    return mojo::TypeConverter<HttpAuthStaticParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HttpAuthStaticParams>::Convert(*this);
  }


  HttpAuthStaticParams();

  HttpAuthStaticParams(
      const std::vector<std::string>& supported_schemes,
      const std::string& gssapi_library_name,
      bool allow_gssapi_library_load);

  ~HttpAuthStaticParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HttpAuthStaticParamsPtr>
  HttpAuthStaticParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HttpAuthStaticParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HttpAuthStaticParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HttpAuthStaticParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HttpAuthStaticParams_UnserializedMessageContext<
            UserType, HttpAuthStaticParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HttpAuthStaticParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return HttpAuthStaticParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HttpAuthStaticParams_UnserializedMessageContext<
            UserType, HttpAuthStaticParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HttpAuthStaticParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<std::string> supported_schemes;
  
  std::string gssapi_library_name;
  
  bool allow_gssapi_library_load;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  HttpAuthDynamicParams {
 public:
  using DataView = HttpAuthDynamicParamsDataView;
  using Data_ = internal::HttpAuthDynamicParams_Data;

  template <typename... Args>
  static HttpAuthDynamicParamsPtr New(Args&&... args) {
    return HttpAuthDynamicParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HttpAuthDynamicParamsPtr From(const U& u) {
    return mojo::TypeConverter<HttpAuthDynamicParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HttpAuthDynamicParams>::Convert(*this);
  }


  HttpAuthDynamicParams();

  HttpAuthDynamicParams(
      const std::string& server_whitelist,
      const std::string& delegate_whitelist,
      bool delegate_by_kdc_policy,
      bool negotiate_disable_cname_lookup,
      bool enable_negotiate_port,
      bool ntlm_v2_enabled,
      const std::string& android_negotiate_account_type);

  ~HttpAuthDynamicParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HttpAuthDynamicParamsPtr>
  HttpAuthDynamicParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HttpAuthDynamicParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HttpAuthDynamicParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HttpAuthDynamicParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HttpAuthDynamicParams_UnserializedMessageContext<
            UserType, HttpAuthDynamicParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HttpAuthDynamicParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return HttpAuthDynamicParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HttpAuthDynamicParams_UnserializedMessageContext<
            UserType, HttpAuthDynamicParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HttpAuthDynamicParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string server_whitelist;
  
  std::string delegate_whitelist;
  
  bool delegate_by_kdc_policy;
  
  bool negotiate_disable_cname_lookup;
  
  bool enable_negotiate_port;
  
  bool ntlm_v2_enabled;
  
  std::string android_negotiate_account_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  CryptConfig {
 public:
  using DataView = CryptConfigDataView;
  using Data_ = internal::CryptConfig_Data;

  template <typename... Args>
  static CryptConfigPtr New(Args&&... args) {
    return CryptConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CryptConfigPtr From(const U& u) {
    return mojo::TypeConverter<CryptConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CryptConfig>::Convert(*this);
  }


  CryptConfig();

  CryptConfig(
      const std::string& store,
      const std::string& product_name,
      bool should_use_preference,
      const base::FilePath& user_data_path);

  ~CryptConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CryptConfigPtr>
  CryptConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CryptConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CryptConfig::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CryptConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CryptConfig_UnserializedMessageContext<
            UserType, CryptConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CryptConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CryptConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CryptConfig_UnserializedMessageContext<
            UserType, CryptConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CryptConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string store;
  
  std::string product_name;
  
  bool should_use_preference;
  
  base::FilePath user_data_path;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class  NetworkServiceParams {
 public:
  using DataView = NetworkServiceParamsDataView;
  using Data_ = internal::NetworkServiceParams_Data;

  template <typename... Args>
  static NetworkServiceParamsPtr New(Args&&... args) {
    return NetworkServiceParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NetworkServiceParamsPtr From(const U& u) {
    return mojo::TypeConverter<NetworkServiceParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NetworkServiceParams>::Convert(*this);
  }


  NetworkServiceParams();

  NetworkServiceParams(
      ::network::mojom::ConnectionType initial_connection_type,
      ::network::mojom::ConnectionSubtype initial_connection_subtype,
      std::vector<EnvironmentVariablePtr> environment);

  ~NetworkServiceParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NetworkServiceParamsPtr>
  NetworkServiceParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NetworkServiceParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NetworkServiceParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NetworkServiceParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NetworkServiceParams_UnserializedMessageContext<
            UserType, NetworkServiceParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NetworkServiceParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NetworkServiceParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NetworkServiceParams_UnserializedMessageContext<
            UserType, NetworkServiceParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NetworkServiceParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::network::mojom::ConnectionType initial_connection_type;
  
  ::network::mojom::ConnectionSubtype initial_connection_subtype;
  
  std::vector<EnvironmentVariablePtr> environment;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceParams);
};

template <typename StructPtrType>
LoadInfoPtr LoadInfo::Clone() const {
  return New(
      mojo::Clone(process_id),
      mojo::Clone(routing_id),
      mojo::Clone(host),
      mojo::Clone(load_state),
      mojo::Clone(state_param),
      mojo::Clone(upload_position),
      mojo::Clone(upload_size)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LoadInfo>::value>::type*>
bool LoadInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->process_id, other_struct.process_id))
    return false;
  if (!mojo::Equals(this->routing_id, other_struct.routing_id))
    return false;
  if (!mojo::Equals(this->host, other_struct.host))
    return false;
  if (!mojo::Equals(this->load_state, other_struct.load_state))
    return false;
  if (!mojo::Equals(this->state_param, other_struct.state_param))
    return false;
  if (!mojo::Equals(this->upload_position, other_struct.upload_position))
    return false;
  if (!mojo::Equals(this->upload_size, other_struct.upload_size))
    return false;
  return true;
}
template <typename StructPtrType>
HttpAuthStaticParamsPtr HttpAuthStaticParams::Clone() const {
  return New(
      mojo::Clone(supported_schemes),
      mojo::Clone(gssapi_library_name),
      mojo::Clone(allow_gssapi_library_load)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HttpAuthStaticParams>::value>::type*>
bool HttpAuthStaticParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->supported_schemes, other_struct.supported_schemes))
    return false;
  if (!mojo::Equals(this->gssapi_library_name, other_struct.gssapi_library_name))
    return false;
  if (!mojo::Equals(this->allow_gssapi_library_load, other_struct.allow_gssapi_library_load))
    return false;
  return true;
}
template <typename StructPtrType>
HttpAuthDynamicParamsPtr HttpAuthDynamicParams::Clone() const {
  return New(
      mojo::Clone(server_whitelist),
      mojo::Clone(delegate_whitelist),
      mojo::Clone(delegate_by_kdc_policy),
      mojo::Clone(negotiate_disable_cname_lookup),
      mojo::Clone(enable_negotiate_port),
      mojo::Clone(ntlm_v2_enabled),
      mojo::Clone(android_negotiate_account_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HttpAuthDynamicParams>::value>::type*>
bool HttpAuthDynamicParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->server_whitelist, other_struct.server_whitelist))
    return false;
  if (!mojo::Equals(this->delegate_whitelist, other_struct.delegate_whitelist))
    return false;
  if (!mojo::Equals(this->delegate_by_kdc_policy, other_struct.delegate_by_kdc_policy))
    return false;
  if (!mojo::Equals(this->negotiate_disable_cname_lookup, other_struct.negotiate_disable_cname_lookup))
    return false;
  if (!mojo::Equals(this->enable_negotiate_port, other_struct.enable_negotiate_port))
    return false;
  if (!mojo::Equals(this->ntlm_v2_enabled, other_struct.ntlm_v2_enabled))
    return false;
  if (!mojo::Equals(this->android_negotiate_account_type, other_struct.android_negotiate_account_type))
    return false;
  return true;
}
template <typename StructPtrType>
CryptConfigPtr CryptConfig::Clone() const {
  return New(
      mojo::Clone(store),
      mojo::Clone(product_name),
      mojo::Clone(should_use_preference),
      mojo::Clone(user_data_path)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CryptConfig>::value>::type*>
bool CryptConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->store, other_struct.store))
    return false;
  if (!mojo::Equals(this->product_name, other_struct.product_name))
    return false;
  if (!mojo::Equals(this->should_use_preference, other_struct.should_use_preference))
    return false;
  if (!mojo::Equals(this->user_data_path, other_struct.user_data_path))
    return false;
  return true;
}
template <typename StructPtrType>
EnvironmentVariablePtr EnvironmentVariable::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EnvironmentVariable>::value>::type*>
bool EnvironmentVariable::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
NetworkServiceParamsPtr NetworkServiceParams::Clone() const {
  return New(
      mojo::Clone(initial_connection_type),
      mojo::Clone(initial_connection_subtype),
      mojo::Clone(environment)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NetworkServiceParams>::value>::type*>
bool NetworkServiceParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->initial_connection_type, other_struct.initial_connection_type))
    return false;
  if (!mojo::Equals(this->initial_connection_subtype, other_struct.initial_connection_subtype))
    return false;
  if (!mojo::Equals(this->environment, other_struct.environment))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::LoadInfo::DataView,
                                         ::network::mojom::LoadInfoPtr> {
  static bool IsNull(const ::network::mojom::LoadInfoPtr& input) { return !input; }
  static void SetToNull(::network::mojom::LoadInfoPtr* output) { output->reset(); }

  static decltype(::network::mojom::LoadInfo::process_id) process_id(
      const ::network::mojom::LoadInfoPtr& input) {
    return input->process_id;
  }

  static decltype(::network::mojom::LoadInfo::routing_id) routing_id(
      const ::network::mojom::LoadInfoPtr& input) {
    return input->routing_id;
  }

  static const decltype(::network::mojom::LoadInfo::host)& host(
      const ::network::mojom::LoadInfoPtr& input) {
    return input->host;
  }

  static decltype(::network::mojom::LoadInfo::load_state) load_state(
      const ::network::mojom::LoadInfoPtr& input) {
    return input->load_state;
  }

  static const decltype(::network::mojom::LoadInfo::state_param)& state_param(
      const ::network::mojom::LoadInfoPtr& input) {
    return input->state_param;
  }

  static decltype(::network::mojom::LoadInfo::upload_position) upload_position(
      const ::network::mojom::LoadInfoPtr& input) {
    return input->upload_position;
  }

  static decltype(::network::mojom::LoadInfo::upload_size) upload_size(
      const ::network::mojom::LoadInfoPtr& input) {
    return input->upload_size;
  }

  static bool Read(::network::mojom::LoadInfo::DataView input, ::network::mojom::LoadInfoPtr* output);
};


template <>
struct  StructTraits<::network::mojom::HttpAuthStaticParams::DataView,
                                         ::network::mojom::HttpAuthStaticParamsPtr> {
  static bool IsNull(const ::network::mojom::HttpAuthStaticParamsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::HttpAuthStaticParamsPtr* output) { output->reset(); }

  static const decltype(::network::mojom::HttpAuthStaticParams::supported_schemes)& supported_schemes(
      const ::network::mojom::HttpAuthStaticParamsPtr& input) {
    return input->supported_schemes;
  }

  static const decltype(::network::mojom::HttpAuthStaticParams::gssapi_library_name)& gssapi_library_name(
      const ::network::mojom::HttpAuthStaticParamsPtr& input) {
    return input->gssapi_library_name;
  }

  static decltype(::network::mojom::HttpAuthStaticParams::allow_gssapi_library_load) allow_gssapi_library_load(
      const ::network::mojom::HttpAuthStaticParamsPtr& input) {
    return input->allow_gssapi_library_load;
  }

  static bool Read(::network::mojom::HttpAuthStaticParams::DataView input, ::network::mojom::HttpAuthStaticParamsPtr* output);
};


template <>
struct  StructTraits<::network::mojom::HttpAuthDynamicParams::DataView,
                                         ::network::mojom::HttpAuthDynamicParamsPtr> {
  static bool IsNull(const ::network::mojom::HttpAuthDynamicParamsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::HttpAuthDynamicParamsPtr* output) { output->reset(); }

  static const decltype(::network::mojom::HttpAuthDynamicParams::server_whitelist)& server_whitelist(
      const ::network::mojom::HttpAuthDynamicParamsPtr& input) {
    return input->server_whitelist;
  }

  static const decltype(::network::mojom::HttpAuthDynamicParams::delegate_whitelist)& delegate_whitelist(
      const ::network::mojom::HttpAuthDynamicParamsPtr& input) {
    return input->delegate_whitelist;
  }

  static decltype(::network::mojom::HttpAuthDynamicParams::delegate_by_kdc_policy) delegate_by_kdc_policy(
      const ::network::mojom::HttpAuthDynamicParamsPtr& input) {
    return input->delegate_by_kdc_policy;
  }

  static decltype(::network::mojom::HttpAuthDynamicParams::negotiate_disable_cname_lookup) negotiate_disable_cname_lookup(
      const ::network::mojom::HttpAuthDynamicParamsPtr& input) {
    return input->negotiate_disable_cname_lookup;
  }

  static decltype(::network::mojom::HttpAuthDynamicParams::enable_negotiate_port) enable_negotiate_port(
      const ::network::mojom::HttpAuthDynamicParamsPtr& input) {
    return input->enable_negotiate_port;
  }

  static decltype(::network::mojom::HttpAuthDynamicParams::ntlm_v2_enabled) ntlm_v2_enabled(
      const ::network::mojom::HttpAuthDynamicParamsPtr& input) {
    return input->ntlm_v2_enabled;
  }

  static const decltype(::network::mojom::HttpAuthDynamicParams::android_negotiate_account_type)& android_negotiate_account_type(
      const ::network::mojom::HttpAuthDynamicParamsPtr& input) {
    return input->android_negotiate_account_type;
  }

  static bool Read(::network::mojom::HttpAuthDynamicParams::DataView input, ::network::mojom::HttpAuthDynamicParamsPtr* output);
};


template <>
struct  StructTraits<::network::mojom::CryptConfig::DataView,
                                         ::network::mojom::CryptConfigPtr> {
  static bool IsNull(const ::network::mojom::CryptConfigPtr& input) { return !input; }
  static void SetToNull(::network::mojom::CryptConfigPtr* output) { output->reset(); }

  static const decltype(::network::mojom::CryptConfig::store)& store(
      const ::network::mojom::CryptConfigPtr& input) {
    return input->store;
  }

  static const decltype(::network::mojom::CryptConfig::product_name)& product_name(
      const ::network::mojom::CryptConfigPtr& input) {
    return input->product_name;
  }

  static decltype(::network::mojom::CryptConfig::should_use_preference) should_use_preference(
      const ::network::mojom::CryptConfigPtr& input) {
    return input->should_use_preference;
  }

  static const decltype(::network::mojom::CryptConfig::user_data_path)& user_data_path(
      const ::network::mojom::CryptConfigPtr& input) {
    return input->user_data_path;
  }

  static bool Read(::network::mojom::CryptConfig::DataView input, ::network::mojom::CryptConfigPtr* output);
};


template <>
struct  StructTraits<::network::mojom::EnvironmentVariable::DataView,
                                         ::network::mojom::EnvironmentVariablePtr> {
  static bool IsNull(const ::network::mojom::EnvironmentVariablePtr& input) { return !input; }
  static void SetToNull(::network::mojom::EnvironmentVariablePtr* output) { output->reset(); }

  static const decltype(::network::mojom::EnvironmentVariable::name)& name(
      const ::network::mojom::EnvironmentVariablePtr& input) {
    return input->name;
  }

  static const decltype(::network::mojom::EnvironmentVariable::value)& value(
      const ::network::mojom::EnvironmentVariablePtr& input) {
    return input->value;
  }

  static bool Read(::network::mojom::EnvironmentVariable::DataView input, ::network::mojom::EnvironmentVariablePtr* output);
};


template <>
struct  StructTraits<::network::mojom::NetworkServiceParams::DataView,
                                         ::network::mojom::NetworkServiceParamsPtr> {
  static bool IsNull(const ::network::mojom::NetworkServiceParamsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::NetworkServiceParamsPtr* output) { output->reset(); }

  static decltype(::network::mojom::NetworkServiceParams::initial_connection_type) initial_connection_type(
      const ::network::mojom::NetworkServiceParamsPtr& input) {
    return input->initial_connection_type;
  }

  static decltype(::network::mojom::NetworkServiceParams::initial_connection_subtype) initial_connection_subtype(
      const ::network::mojom::NetworkServiceParamsPtr& input) {
    return input->initial_connection_subtype;
  }

  static const decltype(::network::mojom::NetworkServiceParams::environment)& environment(
      const ::network::mojom::NetworkServiceParamsPtr& input) {
    return input->environment;
  }

  static bool Read(::network::mojom::NetworkServiceParams::DataView input, ::network::mojom::NetworkServiceParamsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_H_