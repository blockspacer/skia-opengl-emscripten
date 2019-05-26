// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"
#include "services/network/public/mojom/address_list.mojom-shared-internal.h"
#include "services/network/public/mojom/cookie_manager.mojom-shared-internal.h"
#include "services/network/public/mojom/cors_origin_pattern.mojom-shared-internal.h"
#include "services/network/public/mojom/host_resolver.mojom-shared-internal.h"
#include "services/network/public/mojom/http_request_headers.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_address.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_endpoint.mojom-shared-internal.h"
#include "services/network/public/mojom/mdns_responder.mojom-shared-internal.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared-internal.h"
#include "services/network/public/mojom/net_log.mojom-shared-internal.h"
#include "services/network/public/mojom/network_param.mojom-shared-internal.h"
#include "services/network/public/mojom/origin_policy_manager.mojom-shared-internal.h"
#include "services/network/public/mojom/p2p.mojom-shared-internal.h"
#include "services/network/public/mojom/p2p_trusted.mojom-shared-internal.h"
#include "services/network/public/mojom/proxy_config.mojom-shared-internal.h"
#include "services/network/public/mojom/proxy_config_with_annotation.mojom-shared-internal.h"
#include "services/network/public/mojom/proxy_lookup_client.mojom-shared-internal.h"
#include "services/network/public/mojom/proxy_resolving_socket.mojom-shared-internal.h"
#include "services/network/public/mojom/restricted_cookie_manager.mojom-shared-internal.h"
#include "services/network/public/mojom/ssl_config.mojom-shared-internal.h"
#include "services/network/public/mojom/tcp_socket.mojom-shared-internal.h"
#include "services/network/public/mojom/udp_socket.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared-internal.h"
#include "services/network/public/mojom/websocket.mojom-shared-internal.h"
#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "services/network/public/mojom/ct_log_info.mojom-shared-internal.h"
#include "services/network/public/mojom/trial_comparison_cert_verifier.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace network {
namespace mojom {
namespace internal {
class CustomProxyConfig_Data;
class NetworkContextParams_Data;
class NetworkConditions_Data;
class ClearDataFilter_Data;
class NetworkUsage_Data;
class SignedExchangeReport_Data;
class URLLoaderFactoryParams_Data;

struct ClearDataFilter_Type_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct NetworkContext_DomainReliabilityClearMode_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class  CustomProxyConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CustomProxyConfig_Data));
      new (data()) CustomProxyConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CustomProxyConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CustomProxyConfig_Data>(index_);
    }
    CustomProxyConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::ProxyRules_Data> rules;
  uint8_t should_override_existing_config : 1;
  uint8_t allow_non_idempotent_methods : 1;
  uint8_t assume_https_proxies_support_quic : 1;
  uint8_t can_use_proxy_on_http_url_redirect_cycles : 1;
  uint8_t pad4_[7];
  mojo::internal::Pointer<::network::mojom::internal::HttpRequestHeaders_Data> pre_cache_headers;
  mojo::internal::Pointer<::network::mojom::internal::HttpRequestHeaders_Data> post_cache_headers;
  mojo::internal::Pointer<::network::mojom::internal::HttpRequestHeaders_Data> connect_tunnel_headers;

 private:
  CustomProxyConfig_Data();
  ~CustomProxyConfig_Data() = delete;
};
static_assert(sizeof(CustomProxyConfig_Data) == 48,
              "Bad sizeof(CustomProxyConfig_Data)");
// Used by CustomProxyConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CustomProxyConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CustomProxyConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CustomProxyConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CustomProxyConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CustomProxyConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NetworkContextParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContextParams_Data));
      new (data()) NetworkContextParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContextParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContextParams_Data>(index_);
    }
    NetworkContextParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> context_name;
  mojo::internal::Pointer<mojo::internal::String_Data> user_agent;
  mojo::internal::Pointer<mojo::internal::String_Data> accept_language;
  uint8_t enable_brotli : 1;
  uint8_t enable_referrers : 1;
  uint8_t validate_referrer_policy_on_initial_request : 1;
  uint8_t enable_encrypted_cookies : 1;
  uint8_t restore_old_session_cookies : 1;
  uint8_t persist_session_cookies : 1;
  uint8_t http_cache_enabled : 1;
  uint8_t enable_ftp_url_support : 1;
  uint8_t enforce_chrome_ct_policy : 1;
  uint8_t http_09_on_non_default_ports_enabled : 1;
  uint8_t disable_idle_sockets_close_on_memory_pressure : 1;
  uint8_t pac_quick_check_enabled : 1;
  uint8_t enable_certificate_reporting : 1;
  uint8_t enable_expect_ct_reporting : 1;
  uint8_t enable_domain_reliability : 1;
  uint8_t discard_domain_reliablity_uploads : 1;
  uint8_t skip_reporting_send_permission_check : 1;
  uint8_t primary_network_context : 1;
  uint8_t pad20_[1];
  int32_t http_cache_max_size;
  mojo::internal::Pointer<mojo::internal::String_Data> quic_user_agent_id;
  mojo::internal::Interface_Data proxy_resolver_factory;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> cookie_path;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> http_cache_path;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> http_server_properties_path;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> transport_security_persister_path;
  mojo::internal::Pointer<::network::mojom::internal::SSLConfig_Data> initial_ssl_config;
  mojo::internal::Handle_Data ssl_config_client_request;
  mojo::internal::Handle_Data proxy_config_client_request;
  mojo::internal::Pointer<::network::mojom::internal::ProxyConfigWithAnnotation_Data> initial_proxy_config;
  mojo::internal::Pointer<internal::CustomProxyConfig_Data> initial_custom_proxy_config;
  mojo::internal::Handle_Data custom_proxy_config_client_request;
  mojo::internal::Interface_Data proxy_config_poller_client;
  mojo::internal::Interface_Data proxy_error_client;
  uint8_t pad35_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::CTLogInfo_Data>>> ct_logs;
  mojo::internal::Pointer<::network::mojom::internal::TrialComparisonCertVerifierParams_Data> trial_comparison_cert_verifier_params;
  mojo::internal::Pointer<::network::mojom::internal::CookieManagerParams_Data> cookie_manager_params;
  mojo::internal::Pointer<mojo::internal::String_Data> domain_reliability_upload_reporter;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> reporting_delivery_interval;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::CorsOriginAccessPatterns_Data>>> cors_origin_access_list;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> cors_exempt_header_list;

 private:
  NetworkContextParams_Data();
  ~NetworkContextParams_Data() = delete;
};
static_assert(sizeof(NetworkContextParams_Data) == 200,
              "Bad sizeof(NetworkContextParams_Data)");
// Used by NetworkContextParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NetworkContextParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NetworkContextParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NetworkContextParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NetworkContextParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NetworkContextParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NetworkConditions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkConditions_Data));
      new (data()) NetworkConditions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkConditions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkConditions_Data>(index_);
    }
    NetworkConditions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t offline : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> latency;
  double download_throughput;
  double upload_throughput;

 private:
  NetworkConditions_Data();
  ~NetworkConditions_Data() = delete;
};
static_assert(sizeof(NetworkConditions_Data) == 40,
              "Bad sizeof(NetworkConditions_Data)");
// Used by NetworkConditions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NetworkConditions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NetworkConditions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NetworkConditions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NetworkConditions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NetworkConditions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ClearDataFilter_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClearDataFilter_Data));
      new (data()) ClearDataFilter_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClearDataFilter_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClearDataFilter_Data>(index_);
    }
    ClearDataFilter_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> domains;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Origin_Data>>> origins;

 private:
  ClearDataFilter_Data();
  ~ClearDataFilter_Data() = delete;
};
static_assert(sizeof(ClearDataFilter_Data) == 32,
              "Bad sizeof(ClearDataFilter_Data)");
// Used by ClearDataFilter::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ClearDataFilter_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ClearDataFilter_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ClearDataFilter_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ClearDataFilter_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ClearDataFilter_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NetworkUsage_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkUsage_Data));
      new (data()) NetworkUsage_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkUsage_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkUsage_Data>(index_);
    }
    NetworkUsage_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t process_id;
  uint32_t routing_id;
  int64_t total_bytes_received;
  int64_t total_bytes_sent;

 private:
  NetworkUsage_Data();
  ~NetworkUsage_Data() = delete;
};
static_assert(sizeof(NetworkUsage_Data) == 32,
              "Bad sizeof(NetworkUsage_Data)");
// Used by NetworkUsage::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NetworkUsage_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NetworkUsage_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NetworkUsage_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NetworkUsage_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NetworkUsage_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SignedExchangeReport_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SignedExchangeReport_Data));
      new (data()) SignedExchangeReport_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SignedExchangeReport_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SignedExchangeReport_Data>(index_);
    }
    SignedExchangeReport_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[3];
  int32_t status_code;
  mojo::internal::Pointer<mojo::internal::String_Data> type;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> outer_url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> inner_url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> cert_url;
  mojo::internal::Pointer<mojo::internal::String_Data> referrer;
  mojo::internal::Pointer<::network::mojom::internal::IPAddress_Data> server_ip_address;
  mojo::internal::Pointer<mojo::internal::String_Data> protocol;
  mojo::internal::Pointer<mojo::internal::String_Data> method;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> elapsed_time;

 private:
  SignedExchangeReport_Data();
  ~SignedExchangeReport_Data() = delete;
};
static_assert(sizeof(SignedExchangeReport_Data) == 88,
              "Bad sizeof(SignedExchangeReport_Data)");
// Used by SignedExchangeReport::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SignedExchangeReport_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SignedExchangeReport_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SignedExchangeReport_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SignedExchangeReport_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SignedExchangeReport_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  URLLoaderFactoryParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderFactoryParams_Data));
      new (data()) URLLoaderFactoryParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderFactoryParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderFactoryParams_Data>(index_);
    }
    URLLoaderFactoryParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t process_id;
  uint8_t is_corb_enabled : 1;
  uint8_t disable_web_security : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> request_initiator_site_lock;
  mojo::internal::Interface_Data header_client;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::CorsOriginPattern_Data>>> factory_bound_allow_patterns;

 private:
  URLLoaderFactoryParams_Data();
  ~URLLoaderFactoryParams_Data() = delete;
};
static_assert(sizeof(URLLoaderFactoryParams_Data) == 40,
              "Bad sizeof(URLLoaderFactoryParams_Data)");
// Used by URLLoaderFactoryParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct URLLoaderFactoryParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  URLLoaderFactoryParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~URLLoaderFactoryParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    URLLoaderFactoryParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    URLLoaderFactoryParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_INTERNAL_H_