// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/network_service.mojom-blink-forward.h"
#include "mojo/public/mojom/base/file.mojom-blink.h"
#include "mojo/public/mojom/base/file_path.mojom-blink.h"
#include "mojo/public/mojom/base/memory_pressure_level.mojom-blink.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom-blink.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "mojo/public/mojom/base/values.mojom-blink.h"
#include "services/network/public/mojom/cookie_manager.mojom-blink.h"
#include "services/network/public/mojom/host_resolver.mojom-blink.h"
#include "services/network/public/mojom/net_log.mojom-blink.h"
#include "services/network/public/mojom/network_change_manager.mojom-blink.h"
#include "services/network/public/mojom/network_context.mojom-blink.h"
#include "services/network/public/mojom/network_interface.mojom-blink.h"
#include "services/network/public/mojom/network_param.mojom-blink.h"
#include "services/network/public/mojom/network_quality_estimator_manager.mojom-blink.h"
#include "services/network/public/mojom/url_loader.mojom-blink.h"
#include "services/network/public/mojom/url_loader_factory.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"
#include "services/network/public/mojom/signed_tree_head.mojom-blink.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace network {
namespace mojom {
namespace blink {

class SSLPrivateKeyProxy;

template <typename ImplRefTraits>
class SSLPrivateKeyStub;

class SSLPrivateKeyRequestValidator;
class SSLPrivateKeyResponseValidator;


class BLINK_PLATFORM_EXPORT SSLPrivateKey
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


  using SignCallback = base::OnceCallback<void(int32_t, const WTF::Vector<uint8_t>&)>;
  
  virtual void Sign(uint16_t algorithm, const WTF::Vector<uint8_t>& input, SignCallback callback) = 0;
};

class AuthChallengeResponderProxy;

template <typename ImplRefTraits>
class AuthChallengeResponderStub;

class AuthChallengeResponderRequestValidator;


class BLINK_PLATFORM_EXPORT AuthChallengeResponder
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

  
  virtual void OnAuthCredentials(::network::mojom::blink::AuthCredentialsPtr credentials) = 0;
};

class NetworkServiceClientProxy;

template <typename ImplRefTraits>
class NetworkServiceClientStub;

class NetworkServiceClientRequestValidator;
class NetworkServiceClientResponseValidator;


class BLINK_PLATFORM_EXPORT NetworkServiceClient
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

  
  virtual void OnAuthRequired(uint32_t process_id, uint32_t routing_id, uint32_t request_id, const ::blink::KURL& url, bool first_auth_attempt, ::network::mojom::blink::AuthChallengeInfoPtr auth_info, ::network::mojom::blink::URLResponseHeadPtr head, AuthChallengeResponderPtr auth_challenge_responder) = 0;


  using OnCertificateRequestedCallback = base::OnceCallback<void(::network::mojom::blink::X509CertificatePtr, const WTF::String&, const WTF::Vector<uint16_t>&, SSLPrivateKeyPtr, bool)>;
  
  virtual void OnCertificateRequested(const base::Optional<base::UnguessableToken>& window_id, uint32_t process_id, uint32_t routing_id, uint32_t request_id, ::network::mojom::blink::SSLCertRequestInfoPtr cert_info, OnCertificateRequestedCallback callback) = 0;


  using OnSSLCertificateErrorCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void OnSSLCertificateError(uint32_t process_id, uint32_t routing_id, const ::blink::KURL& url, int32_t net_error, ::network::mojom::blink::SSLInfoPtr ssl_info, bool fatal, OnSSLCertificateErrorCallback callback) = 0;


  using OnFileUploadRequestedCallback = base::OnceCallback<void(int32_t, WTF::Vector<base::File>)>;
  
  virtual void OnFileUploadRequested(uint32_t process_id, bool async, const WTF::Vector<base::FilePath>& file_paths, OnFileUploadRequestedCallback callback) = 0;

  
  virtual void OnCookieChange(int32_t process_id, int32_t routing_id, const ::blink::KURL& url, const ::blink::KURL& frame_url, const ::blink::WebCanonicalCookie& cookie, bool blocked_by_policy) = 0;

  
  virtual void OnCookiesRead(int32_t process_id, int32_t routing_id, const ::blink::KURL& url, const ::blink::KURL& frame_url, const WTF::Vector<::blink::WebCanonicalCookie>& cookie_list, bool blocked_by_policy) = 0;


  using OnLoadingStateUpdateCallback = base::OnceCallback<void()>;
  
  virtual void OnLoadingStateUpdate(WTF::Vector<LoadInfoPtr> infos, OnLoadingStateUpdateCallback callback) = 0;


  using OnClearSiteDataCallback = base::OnceCallback<void()>;
  
  virtual void OnClearSiteData(int32_t process_id, int32_t routing_id, const ::blink::KURL& url, const WTF::String& header_value, int32_t load_flags, OnClearSiteDataCallback callback) = 0;

  
  virtual void OnDataUseUpdate(int32_t network_traffic_annotation_id_hash, int64_t recv_bytes, int64_t sent_bytes) = 0;
};

class NetworkServiceProxy;

template <typename ImplRefTraits>
class NetworkServiceStub;

class NetworkServiceRequestValidator;
class NetworkServiceResponseValidator;


class BLINK_PLATFORM_EXPORT NetworkService
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

  
  virtual void StartNetLog(base::File file, ::network::mojom::blink::NetLogCaptureMode capture_mode, ::mojo_base::mojom::blink::DictionaryValuePtr constants) = 0;

  
  virtual void SetSSLKeyLogFile(const base::FilePath& file) = 0;

  
  virtual void CreateNetworkContext(::network::mojom::blink::NetworkContextRequest context, ::network::mojom::blink::NetworkContextParamsPtr params) = 0;

  
  virtual void ConfigureStubHostResolver(bool stub_resolver_enabled, base::Optional<WTF::Vector<::network::mojom::blink::DnsOverHttpsServerPtr>> dns_over_https_servers) = 0;

  
  virtual void DisableQuic() = 0;

  
  virtual void SetUpHttpAuth(HttpAuthStaticParamsPtr http_auth_static_params) = 0;

  
  virtual void ConfigureHttpAuthPrefs(HttpAuthDynamicParamsPtr http_auth_dynamic_params) = 0;

  
  virtual void SetRawHeadersAccess(uint32_t process_id, const WTF::Vector<scoped_refptr<const ::blink::SecurityOrigin>>& origins) = 0;

  
  virtual void GetNetworkChangeManager(::network::mojom::blink::NetworkChangeManagerRequest network_change_manager) = 0;

  
  virtual void GetNetworkQualityEstimatorManager(::network::mojom::blink::NetworkQualityEstimatorManagerRequest network_quality_estimator_manager) = 0;

  
  virtual void GetDnsConfigChangeManager(::network::mojom::blink::DnsConfigChangeManagerRequest dns_config_change_manager) = 0;


  using GetTotalNetworkUsagesCallback = base::OnceCallback<void(WTF::Vector<::network::mojom::blink::NetworkUsagePtr>)>;
  
  virtual void GetTotalNetworkUsages(GetTotalNetworkUsagesCallback callback) = 0;


  using GetNetworkListCallback = base::OnceCallback<void(base::Optional<WTF::Vector<::network::mojom::blink::NetworkInterfacePtr>>)>;
  
  virtual void GetNetworkList(uint32_t policy, GetNetworkListCallback callback) = 0;

  
  virtual void UpdateSignedTreeHead(::network::mojom::blink::SignedTreeHeadPtr signed_tree_head) = 0;

  
  virtual void UpdateCRLSet(::mojo_base::mojom::blink::ReadOnlyBufferPtr crl_set) = 0;

  
  virtual void OnCertDBChanged() = 0;

  
  virtual void SetCryptConfig(CryptConfigPtr crypt_config) = 0;

  
  virtual void AddCorbExceptionForPlugin(uint32_t process_id) = 0;

  
  virtual void RemoveCorbExceptionForPlugin(uint32_t process_id) = 0;

  
  virtual void OnMemoryPressure(::mojo_base::mojom::blink::MemoryPressureLevel memory_pressure_level) = 0;

  
  virtual void SetEnvironment(WTF::Vector<EnvironmentVariablePtr> environment) = 0;
};

class BLINK_PLATFORM_EXPORT SSLPrivateKeyProxy
    : public SSLPrivateKey {
 public:
  using InterfaceType = SSLPrivateKey;

  explicit SSLPrivateKeyProxy(mojo::MessageReceiverWithResponder* receiver);
  void Sign(uint16_t algorithm, const WTF::Vector<uint8_t>& input, SignCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT AuthChallengeResponderProxy
    : public AuthChallengeResponder {
 public:
  using InterfaceType = AuthChallengeResponder;

  explicit AuthChallengeResponderProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnAuthCredentials(::network::mojom::blink::AuthCredentialsPtr credentials) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT NetworkServiceClientProxy
    : public NetworkServiceClient {
 public:
  using InterfaceType = NetworkServiceClient;

  explicit NetworkServiceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnAuthRequired(uint32_t process_id, uint32_t routing_id, uint32_t request_id, const ::blink::KURL& url, bool first_auth_attempt, ::network::mojom::blink::AuthChallengeInfoPtr auth_info, ::network::mojom::blink::URLResponseHeadPtr head, AuthChallengeResponderPtr auth_challenge_responder) final;
  void OnCertificateRequested(const base::Optional<base::UnguessableToken>& window_id, uint32_t process_id, uint32_t routing_id, uint32_t request_id, ::network::mojom::blink::SSLCertRequestInfoPtr cert_info, OnCertificateRequestedCallback callback) final;
  void OnSSLCertificateError(uint32_t process_id, uint32_t routing_id, const ::blink::KURL& url, int32_t net_error, ::network::mojom::blink::SSLInfoPtr ssl_info, bool fatal, OnSSLCertificateErrorCallback callback) final;
  void OnFileUploadRequested(uint32_t process_id, bool async, const WTF::Vector<base::FilePath>& file_paths, OnFileUploadRequestedCallback callback) final;
  void OnCookieChange(int32_t process_id, int32_t routing_id, const ::blink::KURL& url, const ::blink::KURL& frame_url, const ::blink::WebCanonicalCookie& cookie, bool blocked_by_policy) final;
  void OnCookiesRead(int32_t process_id, int32_t routing_id, const ::blink::KURL& url, const ::blink::KURL& frame_url, const WTF::Vector<::blink::WebCanonicalCookie>& cookie_list, bool blocked_by_policy) final;
  void OnLoadingStateUpdate(WTF::Vector<LoadInfoPtr> infos, OnLoadingStateUpdateCallback callback) final;
  void OnClearSiteData(int32_t process_id, int32_t routing_id, const ::blink::KURL& url, const WTF::String& header_value, int32_t load_flags, OnClearSiteDataCallback callback) final;
  void OnDataUseUpdate(int32_t network_traffic_annotation_id_hash, int64_t recv_bytes, int64_t sent_bytes) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT NetworkServiceProxy
    : public NetworkService {
 public:
  using InterfaceType = NetworkService;

  explicit NetworkServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(NetworkServiceClientPtr client, NetworkServiceParamsPtr params) final;
  void StartNetLog(base::File file, ::network::mojom::blink::NetLogCaptureMode capture_mode, ::mojo_base::mojom::blink::DictionaryValuePtr constants) final;
  void SetSSLKeyLogFile(const base::FilePath& file) final;
  void CreateNetworkContext(::network::mojom::blink::NetworkContextRequest context, ::network::mojom::blink::NetworkContextParamsPtr params) final;
  void ConfigureStubHostResolver(bool stub_resolver_enabled, base::Optional<WTF::Vector<::network::mojom::blink::DnsOverHttpsServerPtr>> dns_over_https_servers) final;
  void DisableQuic() final;
  void SetUpHttpAuth(HttpAuthStaticParamsPtr http_auth_static_params) final;
  void ConfigureHttpAuthPrefs(HttpAuthDynamicParamsPtr http_auth_dynamic_params) final;
  void SetRawHeadersAccess(uint32_t process_id, const WTF::Vector<scoped_refptr<const ::blink::SecurityOrigin>>& origins) final;
  void GetNetworkChangeManager(::network::mojom::blink::NetworkChangeManagerRequest network_change_manager) final;
  void GetNetworkQualityEstimatorManager(::network::mojom::blink::NetworkQualityEstimatorManagerRequest network_quality_estimator_manager) final;
  void GetDnsConfigChangeManager(::network::mojom::blink::DnsConfigChangeManagerRequest dns_config_change_manager) final;
  void GetTotalNetworkUsages(GetTotalNetworkUsagesCallback callback) final;
  void GetNetworkList(uint32_t policy, GetNetworkListCallback callback) final;
  void UpdateSignedTreeHead(::network::mojom::blink::SignedTreeHeadPtr signed_tree_head) final;
  void UpdateCRLSet(::mojo_base::mojom::blink::ReadOnlyBufferPtr crl_set) final;
  void OnCertDBChanged() final;
  void SetCryptConfig(CryptConfigPtr crypt_config) final;
  void AddCorbExceptionForPlugin(uint32_t process_id) final;
  void RemoveCorbExceptionForPlugin(uint32_t process_id) final;
  void OnMemoryPressure(::mojo_base::mojom::blink::MemoryPressureLevel memory_pressure_level) final;
  void SetEnvironment(WTF::Vector<EnvironmentVariablePtr> environment) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT SSLPrivateKeyStubDispatch {
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
class BLINK_PLATFORM_EXPORT AuthChallengeResponderStubDispatch {
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
class BLINK_PLATFORM_EXPORT NetworkServiceClientStubDispatch {
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
class BLINK_PLATFORM_EXPORT NetworkServiceStubDispatch {
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
class BLINK_PLATFORM_EXPORT SSLPrivateKeyRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT AuthChallengeResponderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT NetworkServiceClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT NetworkServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT SSLPrivateKeyResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT NetworkServiceClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT NetworkServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class BLINK_PLATFORM_EXPORT EnvironmentVariable {
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
      const WTF::String& name,
      const WTF::String& value);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        EnvironmentVariable::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  WTF::String name;
  
  WTF::String value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class BLINK_PLATFORM_EXPORT LoadInfo {
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
      const WTF::String& host,
      uint32_t load_state,
      const WTF::String& state_param,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LoadInfo::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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
  
  WTF::String host;
  
  uint32_t load_state;
  
  WTF::String state_param;
  
  uint64_t upload_position;
  
  uint64_t upload_size;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT HttpAuthStaticParams {
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
      const WTF::Vector<WTF::String>& supported_schemes,
      const WTF::String& gssapi_library_name,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HttpAuthStaticParams::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  WTF::Vector<WTF::String> supported_schemes;
  
  WTF::String gssapi_library_name;
  
  bool allow_gssapi_library_load;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT HttpAuthDynamicParams {
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
      const WTF::String& server_whitelist,
      const WTF::String& delegate_whitelist,
      bool delegate_by_kdc_policy,
      bool negotiate_disable_cname_lookup,
      bool enable_negotiate_port,
      bool ntlm_v2_enabled,
      const WTF::String& android_negotiate_account_type);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HttpAuthDynamicParams::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  WTF::String server_whitelist;
  
  WTF::String delegate_whitelist;
  
  bool delegate_by_kdc_policy;
  
  bool negotiate_disable_cname_lookup;
  
  bool enable_negotiate_port;
  
  bool ntlm_v2_enabled;
  
  WTF::String android_negotiate_account_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT CryptConfig {
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
      const WTF::String& store,
      const WTF::String& product_name,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CryptConfig::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  WTF::String store;
  
  WTF::String product_name;
  
  bool should_use_preference;
  
  base::FilePath user_data_path;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class BLINK_PLATFORM_EXPORT NetworkServiceParams {
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
      ::network::mojom::blink::ConnectionType initial_connection_type,
      ::network::mojom::blink::ConnectionSubtype initial_connection_subtype,
      WTF::Vector<EnvironmentVariablePtr> environment);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NetworkServiceParams::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  ::network::mojom::blink::ConnectionType initial_connection_type;
  
  ::network::mojom::blink::ConnectionSubtype initial_connection_subtype;
  
  WTF::Vector<EnvironmentVariablePtr> environment;

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


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::LoadInfo::DataView,
                                         ::network::mojom::blink::LoadInfoPtr> {
  static bool IsNull(const ::network::mojom::blink::LoadInfoPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::LoadInfoPtr* output) { output->reset(); }

  static decltype(::network::mojom::blink::LoadInfo::process_id) process_id(
      const ::network::mojom::blink::LoadInfoPtr& input) {
    return input->process_id;
  }

  static decltype(::network::mojom::blink::LoadInfo::routing_id) routing_id(
      const ::network::mojom::blink::LoadInfoPtr& input) {
    return input->routing_id;
  }

  static const decltype(::network::mojom::blink::LoadInfo::host)& host(
      const ::network::mojom::blink::LoadInfoPtr& input) {
    return input->host;
  }

  static decltype(::network::mojom::blink::LoadInfo::load_state) load_state(
      const ::network::mojom::blink::LoadInfoPtr& input) {
    return input->load_state;
  }

  static const decltype(::network::mojom::blink::LoadInfo::state_param)& state_param(
      const ::network::mojom::blink::LoadInfoPtr& input) {
    return input->state_param;
  }

  static decltype(::network::mojom::blink::LoadInfo::upload_position) upload_position(
      const ::network::mojom::blink::LoadInfoPtr& input) {
    return input->upload_position;
  }

  static decltype(::network::mojom::blink::LoadInfo::upload_size) upload_size(
      const ::network::mojom::blink::LoadInfoPtr& input) {
    return input->upload_size;
  }

  static bool Read(::network::mojom::blink::LoadInfo::DataView input, ::network::mojom::blink::LoadInfoPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::HttpAuthStaticParams::DataView,
                                         ::network::mojom::blink::HttpAuthStaticParamsPtr> {
  static bool IsNull(const ::network::mojom::blink::HttpAuthStaticParamsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::HttpAuthStaticParamsPtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::HttpAuthStaticParams::supported_schemes)& supported_schemes(
      const ::network::mojom::blink::HttpAuthStaticParamsPtr& input) {
    return input->supported_schemes;
  }

  static const decltype(::network::mojom::blink::HttpAuthStaticParams::gssapi_library_name)& gssapi_library_name(
      const ::network::mojom::blink::HttpAuthStaticParamsPtr& input) {
    return input->gssapi_library_name;
  }

  static decltype(::network::mojom::blink::HttpAuthStaticParams::allow_gssapi_library_load) allow_gssapi_library_load(
      const ::network::mojom::blink::HttpAuthStaticParamsPtr& input) {
    return input->allow_gssapi_library_load;
  }

  static bool Read(::network::mojom::blink::HttpAuthStaticParams::DataView input, ::network::mojom::blink::HttpAuthStaticParamsPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::HttpAuthDynamicParams::DataView,
                                         ::network::mojom::blink::HttpAuthDynamicParamsPtr> {
  static bool IsNull(const ::network::mojom::blink::HttpAuthDynamicParamsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::HttpAuthDynamicParamsPtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::HttpAuthDynamicParams::server_whitelist)& server_whitelist(
      const ::network::mojom::blink::HttpAuthDynamicParamsPtr& input) {
    return input->server_whitelist;
  }

  static const decltype(::network::mojom::blink::HttpAuthDynamicParams::delegate_whitelist)& delegate_whitelist(
      const ::network::mojom::blink::HttpAuthDynamicParamsPtr& input) {
    return input->delegate_whitelist;
  }

  static decltype(::network::mojom::blink::HttpAuthDynamicParams::delegate_by_kdc_policy) delegate_by_kdc_policy(
      const ::network::mojom::blink::HttpAuthDynamicParamsPtr& input) {
    return input->delegate_by_kdc_policy;
  }

  static decltype(::network::mojom::blink::HttpAuthDynamicParams::negotiate_disable_cname_lookup) negotiate_disable_cname_lookup(
      const ::network::mojom::blink::HttpAuthDynamicParamsPtr& input) {
    return input->negotiate_disable_cname_lookup;
  }

  static decltype(::network::mojom::blink::HttpAuthDynamicParams::enable_negotiate_port) enable_negotiate_port(
      const ::network::mojom::blink::HttpAuthDynamicParamsPtr& input) {
    return input->enable_negotiate_port;
  }

  static decltype(::network::mojom::blink::HttpAuthDynamicParams::ntlm_v2_enabled) ntlm_v2_enabled(
      const ::network::mojom::blink::HttpAuthDynamicParamsPtr& input) {
    return input->ntlm_v2_enabled;
  }

  static const decltype(::network::mojom::blink::HttpAuthDynamicParams::android_negotiate_account_type)& android_negotiate_account_type(
      const ::network::mojom::blink::HttpAuthDynamicParamsPtr& input) {
    return input->android_negotiate_account_type;
  }

  static bool Read(::network::mojom::blink::HttpAuthDynamicParams::DataView input, ::network::mojom::blink::HttpAuthDynamicParamsPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::CryptConfig::DataView,
                                         ::network::mojom::blink::CryptConfigPtr> {
  static bool IsNull(const ::network::mojom::blink::CryptConfigPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::CryptConfigPtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::CryptConfig::store)& store(
      const ::network::mojom::blink::CryptConfigPtr& input) {
    return input->store;
  }

  static const decltype(::network::mojom::blink::CryptConfig::product_name)& product_name(
      const ::network::mojom::blink::CryptConfigPtr& input) {
    return input->product_name;
  }

  static decltype(::network::mojom::blink::CryptConfig::should_use_preference) should_use_preference(
      const ::network::mojom::blink::CryptConfigPtr& input) {
    return input->should_use_preference;
  }

  static const decltype(::network::mojom::blink::CryptConfig::user_data_path)& user_data_path(
      const ::network::mojom::blink::CryptConfigPtr& input) {
    return input->user_data_path;
  }

  static bool Read(::network::mojom::blink::CryptConfig::DataView input, ::network::mojom::blink::CryptConfigPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::EnvironmentVariable::DataView,
                                         ::network::mojom::blink::EnvironmentVariablePtr> {
  static bool IsNull(const ::network::mojom::blink::EnvironmentVariablePtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::EnvironmentVariablePtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::EnvironmentVariable::name)& name(
      const ::network::mojom::blink::EnvironmentVariablePtr& input) {
    return input->name;
  }

  static const decltype(::network::mojom::blink::EnvironmentVariable::value)& value(
      const ::network::mojom::blink::EnvironmentVariablePtr& input) {
    return input->value;
  }

  static bool Read(::network::mojom::blink::EnvironmentVariable::DataView input, ::network::mojom::blink::EnvironmentVariablePtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::NetworkServiceParams::DataView,
                                         ::network::mojom::blink::NetworkServiceParamsPtr> {
  static bool IsNull(const ::network::mojom::blink::NetworkServiceParamsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::NetworkServiceParamsPtr* output) { output->reset(); }

  static decltype(::network::mojom::blink::NetworkServiceParams::initial_connection_type) initial_connection_type(
      const ::network::mojom::blink::NetworkServiceParamsPtr& input) {
    return input->initial_connection_type;
  }

  static decltype(::network::mojom::blink::NetworkServiceParams::initial_connection_subtype) initial_connection_subtype(
      const ::network::mojom::blink::NetworkServiceParamsPtr& input) {
    return input->initial_connection_subtype;
  }

  static const decltype(::network::mojom::blink::NetworkServiceParams::environment)& environment(
      const ::network::mojom::blink::NetworkServiceParamsPtr& input) {
    return input->environment;
  }

  static bool Read(::network::mojom::blink::NetworkServiceParams::DataView input, ::network::mojom::blink::NetworkServiceParamsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_BLINK_H_