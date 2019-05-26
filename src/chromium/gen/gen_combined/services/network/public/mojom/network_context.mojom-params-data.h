// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_PARAMS_DATA_H_

#include "base/logging.h"
#include "base/macros.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif
namespace network {
namespace mojom {
namespace internal {
class  CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data));
      new (data()) CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data>(index_);
    }
    CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CustomProxyConfig_Data> proxy_config;

 private:
  CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data();
  ~CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data() = delete;
};
static_assert(sizeof(CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data) == 16,
              "Bad sizeof(CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data)");
class  CustomProxyConfigClient_MarkProxiesAsBad_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CustomProxyConfigClient_MarkProxiesAsBad_Params_Data));
      new (data()) CustomProxyConfigClient_MarkProxiesAsBad_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CustomProxyConfigClient_MarkProxiesAsBad_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CustomProxyConfigClient_MarkProxiesAsBad_Params_Data>(index_);
    }
    CustomProxyConfigClient_MarkProxiesAsBad_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> bypass_duration;
  mojo::internal::Pointer<::network::mojom::internal::ProxyList_Data> bad_proxies;

 private:
  CustomProxyConfigClient_MarkProxiesAsBad_Params_Data();
  ~CustomProxyConfigClient_MarkProxiesAsBad_Params_Data() = delete;
};
static_assert(sizeof(CustomProxyConfigClient_MarkProxiesAsBad_Params_Data) == 24,
              "Bad sizeof(CustomProxyConfigClient_MarkProxiesAsBad_Params_Data)");
class  CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data));
      new (data()) CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data>(index_);
    }
    CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data();
  ~CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data() = delete;
};
static_assert(sizeof(CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data) == 8,
              "Bad sizeof(CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data)");
class  CustomProxyConfigClient_ClearBadProxiesCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CustomProxyConfigClient_ClearBadProxiesCache_Params_Data));
      new (data()) CustomProxyConfigClient_ClearBadProxiesCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CustomProxyConfigClient_ClearBadProxiesCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CustomProxyConfigClient_ClearBadProxiesCache_Params_Data>(index_);
    }
    CustomProxyConfigClient_ClearBadProxiesCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CustomProxyConfigClient_ClearBadProxiesCache_Params_Data();
  ~CustomProxyConfigClient_ClearBadProxiesCache_Params_Data() = delete;
};
static_assert(sizeof(CustomProxyConfigClient_ClearBadProxiesCache_Params_Data) == 8,
              "Bad sizeof(CustomProxyConfigClient_ClearBadProxiesCache_Params_Data)");
class  TrustedHeaderClient_OnBeforeSendHeaders_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TrustedHeaderClient_OnBeforeSendHeaders_Params_Data));
      new (data()) TrustedHeaderClient_OnBeforeSendHeaders_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TrustedHeaderClient_OnBeforeSendHeaders_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TrustedHeaderClient_OnBeforeSendHeaders_Params_Data>(index_);
    }
    TrustedHeaderClient_OnBeforeSendHeaders_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::HttpRequestHeaders_Data> headers;

 private:
  TrustedHeaderClient_OnBeforeSendHeaders_Params_Data();
  ~TrustedHeaderClient_OnBeforeSendHeaders_Params_Data() = delete;
};
static_assert(sizeof(TrustedHeaderClient_OnBeforeSendHeaders_Params_Data) == 16,
              "Bad sizeof(TrustedHeaderClient_OnBeforeSendHeaders_Params_Data)");
class  TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data));
      new (data()) TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data>(index_);
    }
    TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::network::mojom::internal::HttpRequestHeaders_Data> headers;

 private:
  TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data();
  ~TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data() = delete;
};
static_assert(sizeof(TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data) == 24,
              "Bad sizeof(TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data)");
class  TrustedHeaderClient_OnHeadersReceived_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TrustedHeaderClient_OnHeadersReceived_Params_Data));
      new (data()) TrustedHeaderClient_OnHeadersReceived_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TrustedHeaderClient_OnHeadersReceived_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TrustedHeaderClient_OnHeadersReceived_Params_Data>(index_);
    }
    TrustedHeaderClient_OnHeadersReceived_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> headers;

 private:
  TrustedHeaderClient_OnHeadersReceived_Params_Data();
  ~TrustedHeaderClient_OnHeadersReceived_Params_Data() = delete;
};
static_assert(sizeof(TrustedHeaderClient_OnHeadersReceived_Params_Data) == 16,
              "Bad sizeof(TrustedHeaderClient_OnHeadersReceived_Params_Data)");
class  TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data));
      new (data()) TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data>(index_);
    }
    TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> headers;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> allowed_unsafe_redirect_url;

 private:
  TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data();
  ~TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data() = delete;
};
static_assert(sizeof(TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data) == 32,
              "Bad sizeof(TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data)");
class  TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data));
      new (data()) TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data>(index_);
    }
    TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t request_id;
  mojo::internal::Handle_Data header_client;

 private:
  TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data();
  ~TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data() = delete;
};
static_assert(sizeof(TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data) == 16,
              "Bad sizeof(TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data)");
class  NetworkContextClient_OnCanSendReportingReports_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContextClient_OnCanSendReportingReports_Params_Data));
      new (data()) NetworkContextClient_OnCanSendReportingReports_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContextClient_OnCanSendReportingReports_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContextClient_OnCanSendReportingReports_Params_Data>(index_);
    }
    NetworkContextClient_OnCanSendReportingReports_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Origin_Data>>> origins;

 private:
  NetworkContextClient_OnCanSendReportingReports_Params_Data();
  ~NetworkContextClient_OnCanSendReportingReports_Params_Data() = delete;
};
static_assert(sizeof(NetworkContextClient_OnCanSendReportingReports_Params_Data) == 16,
              "Bad sizeof(NetworkContextClient_OnCanSendReportingReports_Params_Data)");
class  NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data));
      new (data()) NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data>(index_);
    }
    NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Origin_Data>>> origins;

 private:
  NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data();
  ~NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data)");
class  NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data));
      new (data()) NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data>(index_);
    }
    NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> origin;

 private:
  NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data();
  ~NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data() = delete;
};
static_assert(sizeof(NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data) == 16,
              "Bad sizeof(NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data)");
class  NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data));
      new (data()) NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data>(index_);
    }
    NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t allowed : 1;
  uint8_t padfinal_[7];

 private:
  NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data();
  ~NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data)");
class  NetworkContext_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetClient_Params_Data));
      new (data()) NetworkContext_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetClient_Params_Data>(index_);
    }
    NetworkContext_SetClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  NetworkContext_SetClient_Params_Data();
  ~NetworkContext_SetClient_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetClient_Params_Data) == 16,
              "Bad sizeof(NetworkContext_SetClient_Params_Data)");
class  NetworkContext_CreateURLLoaderFactory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateURLLoaderFactory_Params_Data));
      new (data()) NetworkContext_CreateURLLoaderFactory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateURLLoaderFactory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateURLLoaderFactory_Params_Data>(index_);
    }
    NetworkContext_CreateURLLoaderFactory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data url_loader_factory;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::URLLoaderFactoryParams_Data> params;

 private:
  NetworkContext_CreateURLLoaderFactory_Params_Data();
  ~NetworkContext_CreateURLLoaderFactory_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateURLLoaderFactory_Params_Data) == 24,
              "Bad sizeof(NetworkContext_CreateURLLoaderFactory_Params_Data)");
class  NetworkContext_ResetURLLoaderFactories_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ResetURLLoaderFactories_Params_Data));
      new (data()) NetworkContext_ResetURLLoaderFactories_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ResetURLLoaderFactories_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ResetURLLoaderFactories_Params_Data>(index_);
    }
    NetworkContext_ResetURLLoaderFactories_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ResetURLLoaderFactories_Params_Data();
  ~NetworkContext_ResetURLLoaderFactories_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ResetURLLoaderFactories_Params_Data) == 8,
              "Bad sizeof(NetworkContext_ResetURLLoaderFactories_Params_Data)");
class  NetworkContext_GetCookieManager_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_GetCookieManager_Params_Data));
      new (data()) NetworkContext_GetCookieManager_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_GetCookieManager_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_GetCookieManager_Params_Data>(index_);
    }
    NetworkContext_GetCookieManager_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data cookie_manager;
  uint8_t padfinal_[4];

 private:
  NetworkContext_GetCookieManager_Params_Data();
  ~NetworkContext_GetCookieManager_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_GetCookieManager_Params_Data) == 16,
              "Bad sizeof(NetworkContext_GetCookieManager_Params_Data)");
class  NetworkContext_GetRestrictedCookieManager_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_GetRestrictedCookieManager_Params_Data));
      new (data()) NetworkContext_GetRestrictedCookieManager_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_GetRestrictedCookieManager_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_GetRestrictedCookieManager_Params_Data>(index_);
    }
    NetworkContext_GetRestrictedCookieManager_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data restricted_cookie_manager;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;

 private:
  NetworkContext_GetRestrictedCookieManager_Params_Data();
  ~NetworkContext_GetRestrictedCookieManager_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_GetRestrictedCookieManager_Params_Data) == 24,
              "Bad sizeof(NetworkContext_GetRestrictedCookieManager_Params_Data)");
class  NetworkContext_ClearNetworkingHistorySince_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearNetworkingHistorySince_Params_Data));
      new (data()) NetworkContext_ClearNetworkingHistorySince_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearNetworkingHistorySince_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearNetworkingHistorySince_Params_Data>(index_);
    }
    NetworkContext_ClearNetworkingHistorySince_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> start_time;

 private:
  NetworkContext_ClearNetworkingHistorySince_Params_Data();
  ~NetworkContext_ClearNetworkingHistorySince_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearNetworkingHistorySince_Params_Data) == 16,
              "Bad sizeof(NetworkContext_ClearNetworkingHistorySince_Params_Data)");
class  NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data));
      new (data()) NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data();
  ~NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data)");
class  NetworkContext_ClearHttpCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearHttpCache_Params_Data));
      new (data()) NetworkContext_ClearHttpCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearHttpCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearHttpCache_Params_Data>(index_);
    }
    NetworkContext_ClearHttpCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> start_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> end_time;
  mojo::internal::Pointer<internal::ClearDataFilter_Data> filter;

 private:
  NetworkContext_ClearHttpCache_Params_Data();
  ~NetworkContext_ClearHttpCache_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearHttpCache_Params_Data) == 32,
              "Bad sizeof(NetworkContext_ClearHttpCache_Params_Data)");
class  NetworkContext_ClearHttpCache_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearHttpCache_ResponseParams_Data));
      new (data()) NetworkContext_ClearHttpCache_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearHttpCache_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearHttpCache_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearHttpCache_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearHttpCache_ResponseParams_Data();
  ~NetworkContext_ClearHttpCache_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearHttpCache_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearHttpCache_ResponseParams_Data)");
class  NetworkContext_ComputeHttpCacheSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ComputeHttpCacheSize_Params_Data));
      new (data()) NetworkContext_ComputeHttpCacheSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ComputeHttpCacheSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ComputeHttpCacheSize_Params_Data>(index_);
    }
    NetworkContext_ComputeHttpCacheSize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> start_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> end_time;

 private:
  NetworkContext_ComputeHttpCacheSize_Params_Data();
  ~NetworkContext_ComputeHttpCacheSize_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ComputeHttpCacheSize_Params_Data) == 24,
              "Bad sizeof(NetworkContext_ComputeHttpCacheSize_Params_Data)");
class  NetworkContext_ComputeHttpCacheSize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ComputeHttpCacheSize_ResponseParams_Data));
      new (data()) NetworkContext_ComputeHttpCacheSize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ComputeHttpCacheSize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ComputeHttpCacheSize_ResponseParams_Data>(index_);
    }
    NetworkContext_ComputeHttpCacheSize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_upper_bound : 1;
  uint8_t pad0_[7];
  int64_t size_or_error;

 private:
  NetworkContext_ComputeHttpCacheSize_ResponseParams_Data();
  ~NetworkContext_ComputeHttpCacheSize_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ComputeHttpCacheSize_ResponseParams_Data) == 24,
              "Bad sizeof(NetworkContext_ComputeHttpCacheSize_ResponseParams_Data)");
class  NetworkContext_NotifyExternalCacheHit_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_NotifyExternalCacheHit_Params_Data));
      new (data()) NetworkContext_NotifyExternalCacheHit_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_NotifyExternalCacheHit_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_NotifyExternalCacheHit_Params_Data>(index_);
    }
    NetworkContext_NotifyExternalCacheHit_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> http_method;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> top_frame_origin;

 private:
  NetworkContext_NotifyExternalCacheHit_Params_Data();
  ~NetworkContext_NotifyExternalCacheHit_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_NotifyExternalCacheHit_Params_Data) == 32,
              "Bad sizeof(NetworkContext_NotifyExternalCacheHit_Params_Data)");
class  NetworkContext_WriteCacheMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_WriteCacheMetadata_Params_Data));
      new (data()) NetworkContext_WriteCacheMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_WriteCacheMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_WriteCacheMetadata_Params_Data>(index_);
    }
    NetworkContext_WriteCacheMetadata_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  int32_t priority;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> expected_response_time;
  ::mojo_base::mojom::internal::BigBuffer_Data data;

 private:
  NetworkContext_WriteCacheMetadata_Params_Data();
  ~NetworkContext_WriteCacheMetadata_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_WriteCacheMetadata_Params_Data) == 48,
              "Bad sizeof(NetworkContext_WriteCacheMetadata_Params_Data)");
class  NetworkContext_ClearHostCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearHostCache_Params_Data));
      new (data()) NetworkContext_ClearHostCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearHostCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearHostCache_Params_Data>(index_);
    }
    NetworkContext_ClearHostCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ClearDataFilter_Data> filter;

 private:
  NetworkContext_ClearHostCache_Params_Data();
  ~NetworkContext_ClearHostCache_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearHostCache_Params_Data) == 16,
              "Bad sizeof(NetworkContext_ClearHostCache_Params_Data)");
class  NetworkContext_ClearHostCache_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearHostCache_ResponseParams_Data));
      new (data()) NetworkContext_ClearHostCache_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearHostCache_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearHostCache_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearHostCache_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearHostCache_ResponseParams_Data();
  ~NetworkContext_ClearHostCache_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearHostCache_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearHostCache_ResponseParams_Data)");
class  NetworkContext_ClearHttpAuthCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearHttpAuthCache_Params_Data));
      new (data()) NetworkContext_ClearHttpAuthCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearHttpAuthCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearHttpAuthCache_Params_Data>(index_);
    }
    NetworkContext_ClearHttpAuthCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> start_time;

 private:
  NetworkContext_ClearHttpAuthCache_Params_Data();
  ~NetworkContext_ClearHttpAuthCache_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearHttpAuthCache_Params_Data) == 16,
              "Bad sizeof(NetworkContext_ClearHttpAuthCache_Params_Data)");
class  NetworkContext_ClearHttpAuthCache_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearHttpAuthCache_ResponseParams_Data));
      new (data()) NetworkContext_ClearHttpAuthCache_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearHttpAuthCache_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearHttpAuthCache_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearHttpAuthCache_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearHttpAuthCache_ResponseParams_Data();
  ~NetworkContext_ClearHttpAuthCache_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearHttpAuthCache_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearHttpAuthCache_ResponseParams_Data)");
class  NetworkContext_ClearReportingCacheReports_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearReportingCacheReports_Params_Data));
      new (data()) NetworkContext_ClearReportingCacheReports_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearReportingCacheReports_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearReportingCacheReports_Params_Data>(index_);
    }
    NetworkContext_ClearReportingCacheReports_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ClearDataFilter_Data> filter;

 private:
  NetworkContext_ClearReportingCacheReports_Params_Data();
  ~NetworkContext_ClearReportingCacheReports_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearReportingCacheReports_Params_Data) == 16,
              "Bad sizeof(NetworkContext_ClearReportingCacheReports_Params_Data)");
class  NetworkContext_ClearReportingCacheReports_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearReportingCacheReports_ResponseParams_Data));
      new (data()) NetworkContext_ClearReportingCacheReports_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearReportingCacheReports_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearReportingCacheReports_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearReportingCacheReports_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearReportingCacheReports_ResponseParams_Data();
  ~NetworkContext_ClearReportingCacheReports_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearReportingCacheReports_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearReportingCacheReports_ResponseParams_Data)");
class  NetworkContext_ClearReportingCacheClients_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearReportingCacheClients_Params_Data));
      new (data()) NetworkContext_ClearReportingCacheClients_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearReportingCacheClients_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearReportingCacheClients_Params_Data>(index_);
    }
    NetworkContext_ClearReportingCacheClients_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ClearDataFilter_Data> filter;

 private:
  NetworkContext_ClearReportingCacheClients_Params_Data();
  ~NetworkContext_ClearReportingCacheClients_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearReportingCacheClients_Params_Data) == 16,
              "Bad sizeof(NetworkContext_ClearReportingCacheClients_Params_Data)");
class  NetworkContext_ClearReportingCacheClients_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearReportingCacheClients_ResponseParams_Data));
      new (data()) NetworkContext_ClearReportingCacheClients_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearReportingCacheClients_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearReportingCacheClients_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearReportingCacheClients_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearReportingCacheClients_ResponseParams_Data();
  ~NetworkContext_ClearReportingCacheClients_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearReportingCacheClients_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearReportingCacheClients_ResponseParams_Data)");
class  NetworkContext_ClearNetworkErrorLogging_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearNetworkErrorLogging_Params_Data));
      new (data()) NetworkContext_ClearNetworkErrorLogging_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearNetworkErrorLogging_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearNetworkErrorLogging_Params_Data>(index_);
    }
    NetworkContext_ClearNetworkErrorLogging_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ClearDataFilter_Data> filter;

 private:
  NetworkContext_ClearNetworkErrorLogging_Params_Data();
  ~NetworkContext_ClearNetworkErrorLogging_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearNetworkErrorLogging_Params_Data) == 16,
              "Bad sizeof(NetworkContext_ClearNetworkErrorLogging_Params_Data)");
class  NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data));
      new (data()) NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data();
  ~NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data)");
class  NetworkContext_ClearDomainReliability_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearDomainReliability_Params_Data));
      new (data()) NetworkContext_ClearDomainReliability_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearDomainReliability_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearDomainReliability_Params_Data>(index_);
    }
    NetworkContext_ClearDomainReliability_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ClearDataFilter_Data> filter;
  int32_t mode;
  uint8_t padfinal_[4];

 private:
  NetworkContext_ClearDomainReliability_Params_Data();
  ~NetworkContext_ClearDomainReliability_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearDomainReliability_Params_Data) == 24,
              "Bad sizeof(NetworkContext_ClearDomainReliability_Params_Data)");
class  NetworkContext_ClearDomainReliability_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearDomainReliability_ResponseParams_Data));
      new (data()) NetworkContext_ClearDomainReliability_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearDomainReliability_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearDomainReliability_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearDomainReliability_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearDomainReliability_ResponseParams_Data();
  ~NetworkContext_ClearDomainReliability_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearDomainReliability_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearDomainReliability_ResponseParams_Data)");
class  NetworkContext_GetDomainReliabilityJSON_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_GetDomainReliabilityJSON_Params_Data));
      new (data()) NetworkContext_GetDomainReliabilityJSON_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_GetDomainReliabilityJSON_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_GetDomainReliabilityJSON_Params_Data>(index_);
    }
    NetworkContext_GetDomainReliabilityJSON_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_GetDomainReliabilityJSON_Params_Data();
  ~NetworkContext_GetDomainReliabilityJSON_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_GetDomainReliabilityJSON_Params_Data) == 8,
              "Bad sizeof(NetworkContext_GetDomainReliabilityJSON_Params_Data)");
class  NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data));
      new (data()) NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data>(index_);
    }
    NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  ::mojo_base::mojom::internal::Value_Data data;

 private:
  NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data();
  ~NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data) == 24,
              "Bad sizeof(NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data)");
class  NetworkContext_QueueReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_QueueReport_Params_Data));
      new (data()) NetworkContext_QueueReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_QueueReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_QueueReport_Params_Data>(index_);
    }
    NetworkContext_QueueReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> type;
  mojo::internal::Pointer<mojo::internal::String_Data> group;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> user_agent;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> body;

 private:
  NetworkContext_QueueReport_Params_Data();
  ~NetworkContext_QueueReport_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_QueueReport_Params_Data) == 48,
              "Bad sizeof(NetworkContext_QueueReport_Params_Data)");
class  NetworkContext_QueueSignedExchangeReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_QueueSignedExchangeReport_Params_Data));
      new (data()) NetworkContext_QueueSignedExchangeReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_QueueSignedExchangeReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_QueueSignedExchangeReport_Params_Data>(index_);
    }
    NetworkContext_QueueSignedExchangeReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SignedExchangeReport_Data> report;

 private:
  NetworkContext_QueueSignedExchangeReport_Params_Data();
  ~NetworkContext_QueueSignedExchangeReport_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_QueueSignedExchangeReport_Params_Data) == 16,
              "Bad sizeof(NetworkContext_QueueSignedExchangeReport_Params_Data)");
class  NetworkContext_CloseAllConnections_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CloseAllConnections_Params_Data));
      new (data()) NetworkContext_CloseAllConnections_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CloseAllConnections_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CloseAllConnections_Params_Data>(index_);
    }
    NetworkContext_CloseAllConnections_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_CloseAllConnections_Params_Data();
  ~NetworkContext_CloseAllConnections_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CloseAllConnections_Params_Data) == 8,
              "Bad sizeof(NetworkContext_CloseAllConnections_Params_Data)");
class  NetworkContext_CloseAllConnections_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CloseAllConnections_ResponseParams_Data));
      new (data()) NetworkContext_CloseAllConnections_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CloseAllConnections_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CloseAllConnections_ResponseParams_Data>(index_);
    }
    NetworkContext_CloseAllConnections_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_CloseAllConnections_ResponseParams_Data();
  ~NetworkContext_CloseAllConnections_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_CloseAllConnections_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_CloseAllConnections_ResponseParams_Data)");
class  NetworkContext_CloseIdleConnections_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CloseIdleConnections_Params_Data));
      new (data()) NetworkContext_CloseIdleConnections_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CloseIdleConnections_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CloseIdleConnections_Params_Data>(index_);
    }
    NetworkContext_CloseIdleConnections_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_CloseIdleConnections_Params_Data();
  ~NetworkContext_CloseIdleConnections_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CloseIdleConnections_Params_Data) == 8,
              "Bad sizeof(NetworkContext_CloseIdleConnections_Params_Data)");
class  NetworkContext_CloseIdleConnections_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CloseIdleConnections_ResponseParams_Data));
      new (data()) NetworkContext_CloseIdleConnections_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CloseIdleConnections_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CloseIdleConnections_ResponseParams_Data>(index_);
    }
    NetworkContext_CloseIdleConnections_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_CloseIdleConnections_ResponseParams_Data();
  ~NetworkContext_CloseIdleConnections_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_CloseIdleConnections_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_CloseIdleConnections_ResponseParams_Data)");
class  NetworkContext_SetNetworkConditions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetNetworkConditions_Params_Data));
      new (data()) NetworkContext_SetNetworkConditions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetNetworkConditions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetNetworkConditions_Params_Data>(index_);
    }
    NetworkContext_SetNetworkConditions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> throttling_profile_id;
  mojo::internal::Pointer<internal::NetworkConditions_Data> conditions;

 private:
  NetworkContext_SetNetworkConditions_Params_Data();
  ~NetworkContext_SetNetworkConditions_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetNetworkConditions_Params_Data) == 24,
              "Bad sizeof(NetworkContext_SetNetworkConditions_Params_Data)");
class  NetworkContext_SetAcceptLanguage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetAcceptLanguage_Params_Data));
      new (data()) NetworkContext_SetAcceptLanguage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetAcceptLanguage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetAcceptLanguage_Params_Data>(index_);
    }
    NetworkContext_SetAcceptLanguage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> new_accept_language;

 private:
  NetworkContext_SetAcceptLanguage_Params_Data();
  ~NetworkContext_SetAcceptLanguage_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetAcceptLanguage_Params_Data) == 16,
              "Bad sizeof(NetworkContext_SetAcceptLanguage_Params_Data)");
class  NetworkContext_SetEnableReferrers_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetEnableReferrers_Params_Data));
      new (data()) NetworkContext_SetEnableReferrers_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetEnableReferrers_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetEnableReferrers_Params_Data>(index_);
    }
    NetworkContext_SetEnableReferrers_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enable_referrers : 1;
  uint8_t padfinal_[7];

 private:
  NetworkContext_SetEnableReferrers_Params_Data();
  ~NetworkContext_SetEnableReferrers_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetEnableReferrers_Params_Data) == 16,
              "Bad sizeof(NetworkContext_SetEnableReferrers_Params_Data)");
class  NetworkContext_SetCTPolicy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetCTPolicy_Params_Data));
      new (data()) NetworkContext_SetCTPolicy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetCTPolicy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetCTPolicy_Params_Data>(index_);
    }
    NetworkContext_SetCTPolicy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> required_hosts;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> excluded_hosts;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> excluded_spkis;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> excluded_legacy_spkis;

 private:
  NetworkContext_SetCTPolicy_Params_Data();
  ~NetworkContext_SetCTPolicy_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetCTPolicy_Params_Data) == 40,
              "Bad sizeof(NetworkContext_SetCTPolicy_Params_Data)");
class  NetworkContext_AddExpectCT_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_AddExpectCT_Params_Data));
      new (data()) NetworkContext_AddExpectCT_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_AddExpectCT_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_AddExpectCT_Params_Data>(index_);
    }
    NetworkContext_AddExpectCT_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> host;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> expiry;
  uint8_t enforce : 1;
  uint8_t pad2_[7];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> report_uri;

 private:
  NetworkContext_AddExpectCT_Params_Data();
  ~NetworkContext_AddExpectCT_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_AddExpectCT_Params_Data) == 40,
              "Bad sizeof(NetworkContext_AddExpectCT_Params_Data)");
class  NetworkContext_AddExpectCT_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_AddExpectCT_ResponseParams_Data));
      new (data()) NetworkContext_AddExpectCT_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_AddExpectCT_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_AddExpectCT_ResponseParams_Data>(index_);
    }
    NetworkContext_AddExpectCT_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  NetworkContext_AddExpectCT_ResponseParams_Data();
  ~NetworkContext_AddExpectCT_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_AddExpectCT_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkContext_AddExpectCT_ResponseParams_Data)");
class  NetworkContext_SetExpectCTTestReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetExpectCTTestReport_Params_Data));
      new (data()) NetworkContext_SetExpectCTTestReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetExpectCTTestReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetExpectCTTestReport_Params_Data>(index_);
    }
    NetworkContext_SetExpectCTTestReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> report_uri;

 private:
  NetworkContext_SetExpectCTTestReport_Params_Data();
  ~NetworkContext_SetExpectCTTestReport_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetExpectCTTestReport_Params_Data) == 16,
              "Bad sizeof(NetworkContext_SetExpectCTTestReport_Params_Data)");
class  NetworkContext_SetExpectCTTestReport_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetExpectCTTestReport_ResponseParams_Data));
      new (data()) NetworkContext_SetExpectCTTestReport_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetExpectCTTestReport_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetExpectCTTestReport_ResponseParams_Data>(index_);
    }
    NetworkContext_SetExpectCTTestReport_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  NetworkContext_SetExpectCTTestReport_ResponseParams_Data();
  ~NetworkContext_SetExpectCTTestReport_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetExpectCTTestReport_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkContext_SetExpectCTTestReport_ResponseParams_Data)");
class  NetworkContext_GetExpectCTState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_GetExpectCTState_Params_Data));
      new (data()) NetworkContext_GetExpectCTState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_GetExpectCTState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_GetExpectCTState_Params_Data>(index_);
    }
    NetworkContext_GetExpectCTState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> domain;

 private:
  NetworkContext_GetExpectCTState_Params_Data();
  ~NetworkContext_GetExpectCTState_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_GetExpectCTState_Params_Data) == 16,
              "Bad sizeof(NetworkContext_GetExpectCTState_Params_Data)");
class  NetworkContext_GetExpectCTState_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_GetExpectCTState_ResponseParams_Data));
      new (data()) NetworkContext_GetExpectCTState_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_GetExpectCTState_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_GetExpectCTState_ResponseParams_Data>(index_);
    }
    NetworkContext_GetExpectCTState_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> state;

 private:
  NetworkContext_GetExpectCTState_ResponseParams_Data();
  ~NetworkContext_GetExpectCTState_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_GetExpectCTState_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkContext_GetExpectCTState_ResponseParams_Data)");
class  NetworkContext_CreateUDPSocket_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateUDPSocket_Params_Data));
      new (data()) NetworkContext_CreateUDPSocket_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateUDPSocket_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateUDPSocket_Params_Data>(index_);
    }
    NetworkContext_CreateUDPSocket_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  mojo::internal::Interface_Data receiver;
  uint8_t padfinal_[4];

 private:
  NetworkContext_CreateUDPSocket_Params_Data();
  ~NetworkContext_CreateUDPSocket_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateUDPSocket_Params_Data) == 24,
              "Bad sizeof(NetworkContext_CreateUDPSocket_Params_Data)");
class  NetworkContext_CreateTCPServerSocket_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateTCPServerSocket_Params_Data));
      new (data()) NetworkContext_CreateTCPServerSocket_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateTCPServerSocket_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateTCPServerSocket_Params_Data>(index_);
    }
    NetworkContext_CreateTCPServerSocket_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> local_addr;
  uint32_t backlog;
  mojo::internal::Handle_Data socket;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;

 private:
  NetworkContext_CreateTCPServerSocket_Params_Data();
  ~NetworkContext_CreateTCPServerSocket_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateTCPServerSocket_Params_Data) == 32,
              "Bad sizeof(NetworkContext_CreateTCPServerSocket_Params_Data)");
class  NetworkContext_CreateTCPServerSocket_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateTCPServerSocket_ResponseParams_Data));
      new (data()) NetworkContext_CreateTCPServerSocket_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateTCPServerSocket_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateTCPServerSocket_ResponseParams_Data>(index_);
    }
    NetworkContext_CreateTCPServerSocket_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> local_addr_out;

 private:
  NetworkContext_CreateTCPServerSocket_ResponseParams_Data();
  ~NetworkContext_CreateTCPServerSocket_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateTCPServerSocket_ResponseParams_Data) == 24,
              "Bad sizeof(NetworkContext_CreateTCPServerSocket_ResponseParams_Data)");
class  NetworkContext_CreateTCPConnectedSocket_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateTCPConnectedSocket_Params_Data));
      new (data()) NetworkContext_CreateTCPConnectedSocket_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateTCPConnectedSocket_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateTCPConnectedSocket_Params_Data>(index_);
    }
    NetworkContext_CreateTCPConnectedSocket_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> local_addr;
  mojo::internal::Pointer<::network::mojom::internal::AddressList_Data> remote_addr_list;
  mojo::internal::Pointer<::network::mojom::internal::TCPConnectedSocketOptions_Data> tcp_connected_socket_options;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;
  mojo::internal::Handle_Data socket;
  mojo::internal::Interface_Data observer;
  uint8_t padfinal_[4];

 private:
  NetworkContext_CreateTCPConnectedSocket_Params_Data();
  ~NetworkContext_CreateTCPConnectedSocket_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateTCPConnectedSocket_Params_Data) == 56,
              "Bad sizeof(NetworkContext_CreateTCPConnectedSocket_Params_Data)");
class  NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data));
      new (data()) NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data>(index_);
    }
    NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  mojo::internal::Handle_Data receive_stream;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> local_addr;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> peer_addr;
  mojo::internal::Handle_Data send_stream;
  uint8_t padfinal_[4];

 private:
  NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data();
  ~NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data) == 40,
              "Bad sizeof(NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data)");
class  NetworkContext_CreateTCPBoundSocket_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateTCPBoundSocket_Params_Data));
      new (data()) NetworkContext_CreateTCPBoundSocket_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateTCPBoundSocket_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateTCPBoundSocket_Params_Data>(index_);
    }
    NetworkContext_CreateTCPBoundSocket_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> local_addr;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;
  mojo::internal::Handle_Data socket;
  uint8_t padfinal_[4];

 private:
  NetworkContext_CreateTCPBoundSocket_Params_Data();
  ~NetworkContext_CreateTCPBoundSocket_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateTCPBoundSocket_Params_Data) == 32,
              "Bad sizeof(NetworkContext_CreateTCPBoundSocket_Params_Data)");
class  NetworkContext_CreateTCPBoundSocket_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateTCPBoundSocket_ResponseParams_Data));
      new (data()) NetworkContext_CreateTCPBoundSocket_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateTCPBoundSocket_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateTCPBoundSocket_ResponseParams_Data>(index_);
    }
    NetworkContext_CreateTCPBoundSocket_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> local_addr;

 private:
  NetworkContext_CreateTCPBoundSocket_ResponseParams_Data();
  ~NetworkContext_CreateTCPBoundSocket_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateTCPBoundSocket_ResponseParams_Data) == 24,
              "Bad sizeof(NetworkContext_CreateTCPBoundSocket_ResponseParams_Data)");
class  NetworkContext_CreateProxyResolvingSocketFactory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateProxyResolvingSocketFactory_Params_Data));
      new (data()) NetworkContext_CreateProxyResolvingSocketFactory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateProxyResolvingSocketFactory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateProxyResolvingSocketFactory_Params_Data>(index_);
    }
    NetworkContext_CreateProxyResolvingSocketFactory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data factory;
  uint8_t padfinal_[4];

 private:
  NetworkContext_CreateProxyResolvingSocketFactory_Params_Data();
  ~NetworkContext_CreateProxyResolvingSocketFactory_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateProxyResolvingSocketFactory_Params_Data) == 16,
              "Bad sizeof(NetworkContext_CreateProxyResolvingSocketFactory_Params_Data)");
class  NetworkContext_LookUpProxyForURL_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_LookUpProxyForURL_Params_Data));
      new (data()) NetworkContext_LookUpProxyForURL_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_LookUpProxyForURL_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_LookUpProxyForURL_Params_Data>(index_);
    }
    NetworkContext_LookUpProxyForURL_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Interface_Data proxy_lookup_client;

 private:
  NetworkContext_LookUpProxyForURL_Params_Data();
  ~NetworkContext_LookUpProxyForURL_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_LookUpProxyForURL_Params_Data) == 24,
              "Bad sizeof(NetworkContext_LookUpProxyForURL_Params_Data)");
class  NetworkContext_ForceReloadProxyConfig_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ForceReloadProxyConfig_Params_Data));
      new (data()) NetworkContext_ForceReloadProxyConfig_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ForceReloadProxyConfig_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ForceReloadProxyConfig_Params_Data>(index_);
    }
    NetworkContext_ForceReloadProxyConfig_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ForceReloadProxyConfig_Params_Data();
  ~NetworkContext_ForceReloadProxyConfig_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ForceReloadProxyConfig_Params_Data) == 8,
              "Bad sizeof(NetworkContext_ForceReloadProxyConfig_Params_Data)");
class  NetworkContext_ForceReloadProxyConfig_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ForceReloadProxyConfig_ResponseParams_Data));
      new (data()) NetworkContext_ForceReloadProxyConfig_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ForceReloadProxyConfig_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ForceReloadProxyConfig_ResponseParams_Data>(index_);
    }
    NetworkContext_ForceReloadProxyConfig_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ForceReloadProxyConfig_ResponseParams_Data();
  ~NetworkContext_ForceReloadProxyConfig_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ForceReloadProxyConfig_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ForceReloadProxyConfig_ResponseParams_Data)");
class  NetworkContext_ClearBadProxiesCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearBadProxiesCache_Params_Data));
      new (data()) NetworkContext_ClearBadProxiesCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearBadProxiesCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearBadProxiesCache_Params_Data>(index_);
    }
    NetworkContext_ClearBadProxiesCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearBadProxiesCache_Params_Data();
  ~NetworkContext_ClearBadProxiesCache_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearBadProxiesCache_Params_Data) == 8,
              "Bad sizeof(NetworkContext_ClearBadProxiesCache_Params_Data)");
class  NetworkContext_ClearBadProxiesCache_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearBadProxiesCache_ResponseParams_Data));
      new (data()) NetworkContext_ClearBadProxiesCache_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearBadProxiesCache_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearBadProxiesCache_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearBadProxiesCache_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearBadProxiesCache_ResponseParams_Data();
  ~NetworkContext_ClearBadProxiesCache_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearBadProxiesCache_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearBadProxiesCache_ResponseParams_Data)");
class  NetworkContext_CreateWebSocket_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateWebSocket_Params_Data));
      new (data()) NetworkContext_CreateWebSocket_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateWebSocket_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateWebSocket_Params_Data>(index_);
    }
    NetworkContext_CreateWebSocket_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  int32_t process_id;
  int32_t render_frame_id;
  uint32_t options;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Interface_Data auth_handler;
  mojo::internal::Interface_Data header_client;

 private:
  NetworkContext_CreateWebSocket_Params_Data();
  ~NetworkContext_CreateWebSocket_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateWebSocket_Params_Data) == 48,
              "Bad sizeof(NetworkContext_CreateWebSocket_Params_Data)");
class  NetworkContext_CreateNetLogExporter_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateNetLogExporter_Params_Data));
      new (data()) NetworkContext_CreateNetLogExporter_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateNetLogExporter_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateNetLogExporter_Params_Data>(index_);
    }
    NetworkContext_CreateNetLogExporter_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data exporter;
  uint8_t padfinal_[4];

 private:
  NetworkContext_CreateNetLogExporter_Params_Data();
  ~NetworkContext_CreateNetLogExporter_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateNetLogExporter_Params_Data) == 16,
              "Bad sizeof(NetworkContext_CreateNetLogExporter_Params_Data)");
class  NetworkContext_PreconnectSockets_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_PreconnectSockets_Params_Data));
      new (data()) NetworkContext_PreconnectSockets_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_PreconnectSockets_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_PreconnectSockets_Params_Data>(index_);
    }
    NetworkContext_PreconnectSockets_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t num_streams;
  int32_t load_flags;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  uint8_t privacy_mode_enabled : 1;
  uint8_t padfinal_[7];

 private:
  NetworkContext_PreconnectSockets_Params_Data();
  ~NetworkContext_PreconnectSockets_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_PreconnectSockets_Params_Data) == 32,
              "Bad sizeof(NetworkContext_PreconnectSockets_Params_Data)");
class  NetworkContext_CreateP2PSocketManager_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateP2PSocketManager_Params_Data));
      new (data()) NetworkContext_CreateP2PSocketManager_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateP2PSocketManager_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateP2PSocketManager_Params_Data>(index_);
    }
    NetworkContext_CreateP2PSocketManager_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;
  mojo::internal::Handle_Data trusted_socket_manager;
  mojo::internal::Handle_Data socket_manager;

 private:
  NetworkContext_CreateP2PSocketManager_Params_Data();
  ~NetworkContext_CreateP2PSocketManager_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateP2PSocketManager_Params_Data) == 24,
              "Bad sizeof(NetworkContext_CreateP2PSocketManager_Params_Data)");
class  NetworkContext_CreateMdnsResponder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateMdnsResponder_Params_Data));
      new (data()) NetworkContext_CreateMdnsResponder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateMdnsResponder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateMdnsResponder_Params_Data>(index_);
    }
    NetworkContext_CreateMdnsResponder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data responder_request;
  uint8_t padfinal_[4];

 private:
  NetworkContext_CreateMdnsResponder_Params_Data();
  ~NetworkContext_CreateMdnsResponder_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateMdnsResponder_Params_Data) == 16,
              "Bad sizeof(NetworkContext_CreateMdnsResponder_Params_Data)");
class  NetworkContext_ResolveHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ResolveHost_Params_Data));
      new (data()) NetworkContext_ResolveHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ResolveHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ResolveHost_Params_Data>(index_);
    }
    NetworkContext_ResolveHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::HostPortPair_Data> host;
  mojo::internal::Pointer<::network::mojom::internal::ResolveHostParameters_Data> optional_parameters;
  mojo::internal::Interface_Data response_client;

 private:
  NetworkContext_ResolveHost_Params_Data();
  ~NetworkContext_ResolveHost_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ResolveHost_Params_Data) == 32,
              "Bad sizeof(NetworkContext_ResolveHost_Params_Data)");
class  NetworkContext_CreateHostResolver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateHostResolver_Params_Data));
      new (data()) NetworkContext_CreateHostResolver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateHostResolver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateHostResolver_Params_Data>(index_);
    }
    NetworkContext_CreateHostResolver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::DnsConfigOverrides_Data> config_overrides;
  mojo::internal::Handle_Data host_resolver;
  uint8_t padfinal_[4];

 private:
  NetworkContext_CreateHostResolver_Params_Data();
  ~NetworkContext_CreateHostResolver_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateHostResolver_Params_Data) == 24,
              "Bad sizeof(NetworkContext_CreateHostResolver_Params_Data)");
class  NetworkContext_VerifyCertForSignedExchange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_VerifyCertForSignedExchange_Params_Data));
      new (data()) NetworkContext_VerifyCertForSignedExchange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_VerifyCertForSignedExchange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_VerifyCertForSignedExchange_Params_Data>(index_);
    }
    NetworkContext_VerifyCertForSignedExchange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::X509Certificate_Data> certificate;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> ocsp_response;
  mojo::internal::Pointer<mojo::internal::String_Data> sct_list;

 private:
  NetworkContext_VerifyCertForSignedExchange_Params_Data();
  ~NetworkContext_VerifyCertForSignedExchange_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_VerifyCertForSignedExchange_Params_Data) == 40,
              "Bad sizeof(NetworkContext_VerifyCertForSignedExchange_Params_Data)");
class  NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data));
      new (data()) NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data>(index_);
    }
    NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_code;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::network::mojom::internal::CertVerifyResult_Data> cv_result;
  mojo::internal::Pointer<::network::mojom::internal::CTVerifyResult_Data> ct_result;

 private:
  NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data();
  ~NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data) == 32,
              "Bad sizeof(NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data)");
class  NetworkContext_AddHSTS_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_AddHSTS_Params_Data));
      new (data()) NetworkContext_AddHSTS_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_AddHSTS_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_AddHSTS_Params_Data>(index_);
    }
    NetworkContext_AddHSTS_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> host;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> expiry;
  uint8_t include_subdomains : 1;
  uint8_t padfinal_[7];

 private:
  NetworkContext_AddHSTS_Params_Data();
  ~NetworkContext_AddHSTS_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_AddHSTS_Params_Data) == 32,
              "Bad sizeof(NetworkContext_AddHSTS_Params_Data)");
class  NetworkContext_AddHSTS_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_AddHSTS_ResponseParams_Data));
      new (data()) NetworkContext_AddHSTS_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_AddHSTS_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_AddHSTS_ResponseParams_Data>(index_);
    }
    NetworkContext_AddHSTS_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_AddHSTS_ResponseParams_Data();
  ~NetworkContext_AddHSTS_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_AddHSTS_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_AddHSTS_ResponseParams_Data)");
class  NetworkContext_IsHSTSActiveForHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_IsHSTSActiveForHost_Params_Data));
      new (data()) NetworkContext_IsHSTSActiveForHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_IsHSTSActiveForHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_IsHSTSActiveForHost_Params_Data>(index_);
    }
    NetworkContext_IsHSTSActiveForHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> host;

 private:
  NetworkContext_IsHSTSActiveForHost_Params_Data();
  ~NetworkContext_IsHSTSActiveForHost_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_IsHSTSActiveForHost_Params_Data) == 16,
              "Bad sizeof(NetworkContext_IsHSTSActiveForHost_Params_Data)");
class  NetworkContext_IsHSTSActiveForHost_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_IsHSTSActiveForHost_ResponseParams_Data));
      new (data()) NetworkContext_IsHSTSActiveForHost_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_IsHSTSActiveForHost_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_IsHSTSActiveForHost_ResponseParams_Data>(index_);
    }
    NetworkContext_IsHSTSActiveForHost_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  NetworkContext_IsHSTSActiveForHost_ResponseParams_Data();
  ~NetworkContext_IsHSTSActiveForHost_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_IsHSTSActiveForHost_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkContext_IsHSTSActiveForHost_ResponseParams_Data)");
class  NetworkContext_GetHSTSState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_GetHSTSState_Params_Data));
      new (data()) NetworkContext_GetHSTSState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_GetHSTSState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_GetHSTSState_Params_Data>(index_);
    }
    NetworkContext_GetHSTSState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> domain;

 private:
  NetworkContext_GetHSTSState_Params_Data();
  ~NetworkContext_GetHSTSState_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_GetHSTSState_Params_Data) == 16,
              "Bad sizeof(NetworkContext_GetHSTSState_Params_Data)");
class  NetworkContext_GetHSTSState_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_GetHSTSState_ResponseParams_Data));
      new (data()) NetworkContext_GetHSTSState_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_GetHSTSState_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_GetHSTSState_ResponseParams_Data>(index_);
    }
    NetworkContext_GetHSTSState_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> state;

 private:
  NetworkContext_GetHSTSState_ResponseParams_Data();
  ~NetworkContext_GetHSTSState_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_GetHSTSState_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkContext_GetHSTSState_ResponseParams_Data)");
class  NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data));
      new (data()) NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data>(index_);
    }
    NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> source_origin;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::CorsOriginPattern_Data>>> allow_patterns;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::CorsOriginPattern_Data>>> block_patterns;

 private:
  NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data();
  ~NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data) == 32,
              "Bad sizeof(NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data)");
class  NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data));
      new (data()) NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data>(index_);
    }
    NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data();
  ~NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data)");
class  NetworkContext_DeleteDynamicDataForHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_DeleteDynamicDataForHost_Params_Data));
      new (data()) NetworkContext_DeleteDynamicDataForHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_DeleteDynamicDataForHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_DeleteDynamicDataForHost_Params_Data>(index_);
    }
    NetworkContext_DeleteDynamicDataForHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> host;

 private:
  NetworkContext_DeleteDynamicDataForHost_Params_Data();
  ~NetworkContext_DeleteDynamicDataForHost_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_DeleteDynamicDataForHost_Params_Data) == 16,
              "Bad sizeof(NetworkContext_DeleteDynamicDataForHost_Params_Data)");
class  NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data));
      new (data()) NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data>(index_);
    }
    NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data();
  ~NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data)");
class  NetworkContext_SaveHttpAuthCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SaveHttpAuthCache_Params_Data));
      new (data()) NetworkContext_SaveHttpAuthCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SaveHttpAuthCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SaveHttpAuthCache_Params_Data>(index_);
    }
    NetworkContext_SaveHttpAuthCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_SaveHttpAuthCache_Params_Data();
  ~NetworkContext_SaveHttpAuthCache_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_SaveHttpAuthCache_Params_Data) == 8,
              "Bad sizeof(NetworkContext_SaveHttpAuthCache_Params_Data)");
class  NetworkContext_SaveHttpAuthCache_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SaveHttpAuthCache_ResponseParams_Data));
      new (data()) NetworkContext_SaveHttpAuthCache_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SaveHttpAuthCache_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SaveHttpAuthCache_ResponseParams_Data>(index_);
    }
    NetworkContext_SaveHttpAuthCache_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> cache_key;

 private:
  NetworkContext_SaveHttpAuthCache_ResponseParams_Data();
  ~NetworkContext_SaveHttpAuthCache_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_SaveHttpAuthCache_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkContext_SaveHttpAuthCache_ResponseParams_Data)");
class  NetworkContext_LoadHttpAuthCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_LoadHttpAuthCache_Params_Data));
      new (data()) NetworkContext_LoadHttpAuthCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_LoadHttpAuthCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_LoadHttpAuthCache_Params_Data>(index_);
    }
    NetworkContext_LoadHttpAuthCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> cache_key;

 private:
  NetworkContext_LoadHttpAuthCache_Params_Data();
  ~NetworkContext_LoadHttpAuthCache_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_LoadHttpAuthCache_Params_Data) == 16,
              "Bad sizeof(NetworkContext_LoadHttpAuthCache_Params_Data)");
class  NetworkContext_LoadHttpAuthCache_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_LoadHttpAuthCache_ResponseParams_Data));
      new (data()) NetworkContext_LoadHttpAuthCache_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_LoadHttpAuthCache_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_LoadHttpAuthCache_ResponseParams_Data>(index_);
    }
    NetworkContext_LoadHttpAuthCache_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_LoadHttpAuthCache_ResponseParams_Data();
  ~NetworkContext_LoadHttpAuthCache_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_LoadHttpAuthCache_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_LoadHttpAuthCache_ResponseParams_Data)");
class  NetworkContext_LookupBasicAuthCredentials_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_LookupBasicAuthCredentials_Params_Data));
      new (data()) NetworkContext_LookupBasicAuthCredentials_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_LookupBasicAuthCredentials_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_LookupBasicAuthCredentials_Params_Data>(index_);
    }
    NetworkContext_LookupBasicAuthCredentials_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  NetworkContext_LookupBasicAuthCredentials_Params_Data();
  ~NetworkContext_LookupBasicAuthCredentials_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_LookupBasicAuthCredentials_Params_Data) == 16,
              "Bad sizeof(NetworkContext_LookupBasicAuthCredentials_Params_Data)");
class  NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data));
      new (data()) NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data>(index_);
    }
    NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::AuthCredentials_Data> credentials;

 private:
  NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data();
  ~NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data)");
class  NetworkContext_EnableStaticKeyPinningForTesting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_EnableStaticKeyPinningForTesting_Params_Data));
      new (data()) NetworkContext_EnableStaticKeyPinningForTesting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_EnableStaticKeyPinningForTesting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_EnableStaticKeyPinningForTesting_Params_Data>(index_);
    }
    NetworkContext_EnableStaticKeyPinningForTesting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_EnableStaticKeyPinningForTesting_Params_Data();
  ~NetworkContext_EnableStaticKeyPinningForTesting_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_EnableStaticKeyPinningForTesting_Params_Data) == 8,
              "Bad sizeof(NetworkContext_EnableStaticKeyPinningForTesting_Params_Data)");
class  NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data));
      new (data()) NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data>(index_);
    }
    NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data();
  ~NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data)");
class  NetworkContext_SetFailingHttpTransactionForTesting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetFailingHttpTransactionForTesting_Params_Data));
      new (data()) NetworkContext_SetFailingHttpTransactionForTesting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetFailingHttpTransactionForTesting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetFailingHttpTransactionForTesting_Params_Data>(index_);
    }
    NetworkContext_SetFailingHttpTransactionForTesting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t rv;
  uint8_t padfinal_[4];

 private:
  NetworkContext_SetFailingHttpTransactionForTesting_Params_Data();
  ~NetworkContext_SetFailingHttpTransactionForTesting_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetFailingHttpTransactionForTesting_Params_Data) == 16,
              "Bad sizeof(NetworkContext_SetFailingHttpTransactionForTesting_Params_Data)");
class  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data));
      new (data()) NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data>(index_);
    }
    NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data();
  ~NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data)");
class  NetworkContext_VerifyCertificateForTesting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_VerifyCertificateForTesting_Params_Data));
      new (data()) NetworkContext_VerifyCertificateForTesting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_VerifyCertificateForTesting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_VerifyCertificateForTesting_Params_Data>(index_);
    }
    NetworkContext_VerifyCertificateForTesting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::X509Certificate_Data> certificate;
  mojo::internal::Pointer<mojo::internal::String_Data> hostname;
  mojo::internal::Pointer<mojo::internal::String_Data> ocsp_response;

 private:
  NetworkContext_VerifyCertificateForTesting_Params_Data();
  ~NetworkContext_VerifyCertificateForTesting_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_VerifyCertificateForTesting_Params_Data) == 32,
              "Bad sizeof(NetworkContext_VerifyCertificateForTesting_Params_Data)");
class  NetworkContext_VerifyCertificateForTesting_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_VerifyCertificateForTesting_ResponseParams_Data));
      new (data()) NetworkContext_VerifyCertificateForTesting_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_VerifyCertificateForTesting_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_VerifyCertificateForTesting_ResponseParams_Data>(index_);
    }
    NetworkContext_VerifyCertificateForTesting_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_code;
  uint8_t padfinal_[4];

 private:
  NetworkContext_VerifyCertificateForTesting_ResponseParams_Data();
  ~NetworkContext_VerifyCertificateForTesting_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_VerifyCertificateForTesting_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkContext_VerifyCertificateForTesting_ResponseParams_Data)");
class  NetworkContext_AddDomainReliabilityContextForTesting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_AddDomainReliabilityContextForTesting_Params_Data));
      new (data()) NetworkContext_AddDomainReliabilityContextForTesting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_AddDomainReliabilityContextForTesting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_AddDomainReliabilityContextForTesting_Params_Data>(index_);
    }
    NetworkContext_AddDomainReliabilityContextForTesting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> origin;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> upload_url;

 private:
  NetworkContext_AddDomainReliabilityContextForTesting_Params_Data();
  ~NetworkContext_AddDomainReliabilityContextForTesting_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_AddDomainReliabilityContextForTesting_Params_Data) == 24,
              "Bad sizeof(NetworkContext_AddDomainReliabilityContextForTesting_Params_Data)");
class  NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data));
      new (data()) NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data>(index_);
    }
    NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data();
  ~NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data)");
class  NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data));
      new (data()) NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data>(index_);
    }
    NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data();
  ~NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data) == 8,
              "Bad sizeof(NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data)");
class  NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data));
      new (data()) NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data>(index_);
    }
    NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data();
  ~NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data)");
class  NetworkContext_GetOriginPolicyManager_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_GetOriginPolicyManager_Params_Data));
      new (data()) NetworkContext_GetOriginPolicyManager_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_GetOriginPolicyManager_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_GetOriginPolicyManager_Params_Data>(index_);
    }
    NetworkContext_GetOriginPolicyManager_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data origin_policy_manager;
  uint8_t padfinal_[4];

 private:
  NetworkContext_GetOriginPolicyManager_Params_Data();
  ~NetworkContext_GetOriginPolicyManager_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_GetOriginPolicyManager_Params_Data) == 16,
              "Bad sizeof(NetworkContext_GetOriginPolicyManager_Params_Data)");

}  // namespace internal
class CustomProxyConfigClient_OnCustomProxyConfigUpdated_ParamsDataView {
 public:
  CustomProxyConfigClient_OnCustomProxyConfigUpdated_ParamsDataView() {}

  CustomProxyConfigClient_OnCustomProxyConfigUpdated_ParamsDataView(
      internal::CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProxyConfigDataView(
      CustomProxyConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProxyConfig(UserType* output) {
    auto* pointer = data_->proxy_config.Get();
    return mojo::internal::Deserialize<::network::mojom::CustomProxyConfigDataView>(
        pointer, output, context_);
  }
 private:
  internal::CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CustomProxyConfigClient_MarkProxiesAsBad_ParamsDataView {
 public:
  CustomProxyConfigClient_MarkProxiesAsBad_ParamsDataView() {}

  CustomProxyConfigClient_MarkProxiesAsBad_ParamsDataView(
      internal::CustomProxyConfigClient_MarkProxiesAsBad_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBypassDurationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBypassDuration(UserType* output) {
    auto* pointer = data_->bypass_duration.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetBadProxiesDataView(
      ::network::mojom::ProxyListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBadProxies(UserType* output) {
    auto* pointer = data_->bad_proxies.Get();
    return mojo::internal::Deserialize<::network::mojom::ProxyListDataView>(
        pointer, output, context_);
  }
 private:
  internal::CustomProxyConfigClient_MarkProxiesAsBad_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CustomProxyConfigClient_MarkProxiesAsBad_ResponseParamsDataView {
 public:
  CustomProxyConfigClient_MarkProxiesAsBad_ResponseParamsDataView() {}

  CustomProxyConfigClient_MarkProxiesAsBad_ResponseParamsDataView(
      internal::CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data* data_ = nullptr;
};

class CustomProxyConfigClient_ClearBadProxiesCache_ParamsDataView {
 public:
  CustomProxyConfigClient_ClearBadProxiesCache_ParamsDataView() {}

  CustomProxyConfigClient_ClearBadProxiesCache_ParamsDataView(
      internal::CustomProxyConfigClient_ClearBadProxiesCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CustomProxyConfigClient_ClearBadProxiesCache_Params_Data* data_ = nullptr;
};

class TrustedHeaderClient_OnBeforeSendHeaders_ParamsDataView {
 public:
  TrustedHeaderClient_OnBeforeSendHeaders_ParamsDataView() {}

  TrustedHeaderClient_OnBeforeSendHeaders_ParamsDataView(
      internal::TrustedHeaderClient_OnBeforeSendHeaders_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHeadersDataView(
      ::network::mojom::HttpRequestHeadersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpRequestHeadersDataView>(
        pointer, output, context_);
  }
 private:
  internal::TrustedHeaderClient_OnBeforeSendHeaders_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TrustedHeaderClient_OnBeforeSendHeaders_ResponseParamsDataView {
 public:
  TrustedHeaderClient_OnBeforeSendHeaders_ResponseParamsDataView() {}

  TrustedHeaderClient_OnBeforeSendHeaders_ResponseParamsDataView(
      internal::TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
  inline void GetHeadersDataView(
      ::network::mojom::HttpRequestHeadersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpRequestHeadersDataView>(
        pointer, output, context_);
  }
 private:
  internal::TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TrustedHeaderClient_OnHeadersReceived_ParamsDataView {
 public:
  TrustedHeaderClient_OnHeadersReceived_ParamsDataView() {}

  TrustedHeaderClient_OnHeadersReceived_ParamsDataView(
      internal::TrustedHeaderClient_OnHeadersReceived_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHeadersDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::TrustedHeaderClient_OnHeadersReceived_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TrustedHeaderClient_OnHeadersReceived_ResponseParamsDataView {
 public:
  TrustedHeaderClient_OnHeadersReceived_ResponseParamsDataView() {}

  TrustedHeaderClient_OnHeadersReceived_ResponseParamsDataView(
      internal::TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
  inline void GetHeadersDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAllowedUnsafeRedirectUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllowedUnsafeRedirectUrl(UserType* output) {
    auto* pointer = data_->allowed_unsafe_redirect_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TrustedURLLoaderHeaderClient_OnLoaderCreated_ParamsDataView {
 public:
  TrustedURLLoaderHeaderClient_OnLoaderCreated_ParamsDataView() {}

  TrustedURLLoaderHeaderClient_OnLoaderCreated_ParamsDataView(
      internal::TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t request_id() const {
    return data_->request_id;
  }
  template <typename UserType>
  UserType TakeHeaderClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TrustedHeaderClientRequestDataView>(
            &data_->header_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContextClient_OnCanSendReportingReports_ParamsDataView {
 public:
  NetworkContextClient_OnCanSendReportingReports_ParamsDataView() {}

  NetworkContextClient_OnCanSendReportingReports_ParamsDataView(
      internal::NetworkContextClient_OnCanSendReportingReports_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginsDataView(
      mojo::ArrayDataView<::url::mojom::OriginDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigins(UserType* output) {
    auto* pointer = data_->origins.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::OriginDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContextClient_OnCanSendReportingReports_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContextClient_OnCanSendReportingReports_ResponseParamsDataView {
 public:
  NetworkContextClient_OnCanSendReportingReports_ResponseParamsDataView() {}

  NetworkContextClient_OnCanSendReportingReports_ResponseParamsDataView(
      internal::NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginsDataView(
      mojo::ArrayDataView<::url::mojom::OriginDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigins(UserType* output) {
    auto* pointer = data_->origins.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::OriginDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContextClient_OnCanSendDomainReliabilityUpload_ParamsDataView {
 public:
  NetworkContextClient_OnCanSendDomainReliabilityUpload_ParamsDataView() {}

  NetworkContextClient_OnCanSendDomainReliabilityUpload_ParamsDataView(
      internal::NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParamsDataView {
 public:
  NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParamsDataView() {}

  NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParamsDataView(
      internal::NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool allowed() const {
    return data_->allowed;
  }
 private:
  internal::NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_SetClient_ParamsDataView {
 public:
  NetworkContext_SetClient_ParamsDataView() {}

  NetworkContext_SetClient_ParamsDataView(
      internal::NetworkContext_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::NetworkContextClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateURLLoaderFactory_ParamsDataView {
 public:
  NetworkContext_CreateURLLoaderFactory_ParamsDataView() {}

  NetworkContext_CreateURLLoaderFactory_ParamsDataView(
      internal::NetworkContext_CreateURLLoaderFactory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeUrlLoaderFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryRequestDataView>(
            &data_->url_loader_factory, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetParamsDataView(
      URLLoaderFactoryParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_CreateURLLoaderFactory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ResetURLLoaderFactories_ParamsDataView {
 public:
  NetworkContext_ResetURLLoaderFactories_ParamsDataView() {}

  NetworkContext_ResetURLLoaderFactories_ParamsDataView(
      internal::NetworkContext_ResetURLLoaderFactories_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ResetURLLoaderFactories_Params_Data* data_ = nullptr;
};

class NetworkContext_GetCookieManager_ParamsDataView {
 public:
  NetworkContext_GetCookieManager_ParamsDataView() {}

  NetworkContext_GetCookieManager_ParamsDataView(
      internal::NetworkContext_GetCookieManager_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeCookieManager() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::CookieManagerRequestDataView>(
            &data_->cookie_manager, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_GetCookieManager_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_GetRestrictedCookieManager_ParamsDataView {
 public:
  NetworkContext_GetRestrictedCookieManager_ParamsDataView() {}

  NetworkContext_GetRestrictedCookieManager_ParamsDataView(
      internal::NetworkContext_GetRestrictedCookieManager_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRestrictedCookieManager() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::RestrictedCookieManagerRequestDataView>(
            &data_->restricted_cookie_manager, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_GetRestrictedCookieManager_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearNetworkingHistorySince_ParamsDataView {
 public:
  NetworkContext_ClearNetworkingHistorySince_ParamsDataView() {}

  NetworkContext_ClearNetworkingHistorySince_ParamsDataView(
      internal::NetworkContext_ClearNetworkingHistorySince_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStartTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartTime(UserType* output) {
    auto* pointer = data_->start_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_ClearNetworkingHistorySince_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearNetworkingHistorySince_ResponseParamsDataView {
 public:
  NetworkContext_ClearNetworkingHistorySince_ResponseParamsDataView() {}

  NetworkContext_ClearNetworkingHistorySince_ResponseParamsDataView(
      internal::NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_ClearHttpCache_ParamsDataView {
 public:
  NetworkContext_ClearHttpCache_ParamsDataView() {}

  NetworkContext_ClearHttpCache_ParamsDataView(
      internal::NetworkContext_ClearHttpCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStartTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartTime(UserType* output) {
    auto* pointer = data_->start_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetEndTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEndTime(UserType* output) {
    auto* pointer = data_->end_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetFilterDataView(
      ClearDataFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilter(UserType* output) {
    auto* pointer = data_->filter.Get();
    return mojo::internal::Deserialize<::network::mojom::ClearDataFilterDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_ClearHttpCache_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearHttpCache_ResponseParamsDataView {
 public:
  NetworkContext_ClearHttpCache_ResponseParamsDataView() {}

  NetworkContext_ClearHttpCache_ResponseParamsDataView(
      internal::NetworkContext_ClearHttpCache_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearHttpCache_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_ComputeHttpCacheSize_ParamsDataView {
 public:
  NetworkContext_ComputeHttpCacheSize_ParamsDataView() {}

  NetworkContext_ComputeHttpCacheSize_ParamsDataView(
      internal::NetworkContext_ComputeHttpCacheSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStartTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartTime(UserType* output) {
    auto* pointer = data_->start_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetEndTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEndTime(UserType* output) {
    auto* pointer = data_->end_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_ComputeHttpCacheSize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ComputeHttpCacheSize_ResponseParamsDataView {
 public:
  NetworkContext_ComputeHttpCacheSize_ResponseParamsDataView() {}

  NetworkContext_ComputeHttpCacheSize_ResponseParamsDataView(
      internal::NetworkContext_ComputeHttpCacheSize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool is_upper_bound() const {
    return data_->is_upper_bound;
  }
  int64_t size_or_error() const {
    return data_->size_or_error;
  }
 private:
  internal::NetworkContext_ComputeHttpCacheSize_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_NotifyExternalCacheHit_ParamsDataView {
 public:
  NetworkContext_NotifyExternalCacheHit_ParamsDataView() {}

  NetworkContext_NotifyExternalCacheHit_ParamsDataView(
      internal::NetworkContext_NotifyExternalCacheHit_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetHttpMethodDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHttpMethod(UserType* output) {
    auto* pointer = data_->http_method.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetTopFrameOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTopFrameOrigin(UserType* output) {
    auto* pointer = data_->top_frame_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_NotifyExternalCacheHit_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_WriteCacheMetadata_ParamsDataView {
 public:
  NetworkContext_WriteCacheMetadata_ParamsDataView() {}

  NetworkContext_WriteCacheMetadata_ParamsDataView(
      internal::NetworkContext_WriteCacheMetadata_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPriority(UserType* output) const {
    auto data_value = data_->priority;
    return mojo::internal::Deserialize<::network::mojom::RequestPriority>(
        data_value, output);
  }

  ::network::mojom::RequestPriority priority() const {
    return static_cast<::network::mojom::RequestPriority>(data_->priority);
  }
  inline void GetExpectedResponseTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExpectedResponseTime(UserType* output) {
    auto* pointer = data_->expected_response_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      ::mojo_base::mojom::BigBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = !data_->data.is_null() ? &data_->data : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_WriteCacheMetadata_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearHostCache_ParamsDataView {
 public:
  NetworkContext_ClearHostCache_ParamsDataView() {}

  NetworkContext_ClearHostCache_ParamsDataView(
      internal::NetworkContext_ClearHostCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilterDataView(
      ClearDataFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilter(UserType* output) {
    auto* pointer = data_->filter.Get();
    return mojo::internal::Deserialize<::network::mojom::ClearDataFilterDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_ClearHostCache_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearHostCache_ResponseParamsDataView {
 public:
  NetworkContext_ClearHostCache_ResponseParamsDataView() {}

  NetworkContext_ClearHostCache_ResponseParamsDataView(
      internal::NetworkContext_ClearHostCache_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearHostCache_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_ClearHttpAuthCache_ParamsDataView {
 public:
  NetworkContext_ClearHttpAuthCache_ParamsDataView() {}

  NetworkContext_ClearHttpAuthCache_ParamsDataView(
      internal::NetworkContext_ClearHttpAuthCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStartTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartTime(UserType* output) {
    auto* pointer = data_->start_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_ClearHttpAuthCache_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearHttpAuthCache_ResponseParamsDataView {
 public:
  NetworkContext_ClearHttpAuthCache_ResponseParamsDataView() {}

  NetworkContext_ClearHttpAuthCache_ResponseParamsDataView(
      internal::NetworkContext_ClearHttpAuthCache_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearHttpAuthCache_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_ClearReportingCacheReports_ParamsDataView {
 public:
  NetworkContext_ClearReportingCacheReports_ParamsDataView() {}

  NetworkContext_ClearReportingCacheReports_ParamsDataView(
      internal::NetworkContext_ClearReportingCacheReports_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilterDataView(
      ClearDataFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilter(UserType* output) {
    auto* pointer = data_->filter.Get();
    return mojo::internal::Deserialize<::network::mojom::ClearDataFilterDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_ClearReportingCacheReports_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearReportingCacheReports_ResponseParamsDataView {
 public:
  NetworkContext_ClearReportingCacheReports_ResponseParamsDataView() {}

  NetworkContext_ClearReportingCacheReports_ResponseParamsDataView(
      internal::NetworkContext_ClearReportingCacheReports_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearReportingCacheReports_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_ClearReportingCacheClients_ParamsDataView {
 public:
  NetworkContext_ClearReportingCacheClients_ParamsDataView() {}

  NetworkContext_ClearReportingCacheClients_ParamsDataView(
      internal::NetworkContext_ClearReportingCacheClients_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilterDataView(
      ClearDataFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilter(UserType* output) {
    auto* pointer = data_->filter.Get();
    return mojo::internal::Deserialize<::network::mojom::ClearDataFilterDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_ClearReportingCacheClients_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearReportingCacheClients_ResponseParamsDataView {
 public:
  NetworkContext_ClearReportingCacheClients_ResponseParamsDataView() {}

  NetworkContext_ClearReportingCacheClients_ResponseParamsDataView(
      internal::NetworkContext_ClearReportingCacheClients_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearReportingCacheClients_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_ClearNetworkErrorLogging_ParamsDataView {
 public:
  NetworkContext_ClearNetworkErrorLogging_ParamsDataView() {}

  NetworkContext_ClearNetworkErrorLogging_ParamsDataView(
      internal::NetworkContext_ClearNetworkErrorLogging_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilterDataView(
      ClearDataFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilter(UserType* output) {
    auto* pointer = data_->filter.Get();
    return mojo::internal::Deserialize<::network::mojom::ClearDataFilterDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_ClearNetworkErrorLogging_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearNetworkErrorLogging_ResponseParamsDataView {
 public:
  NetworkContext_ClearNetworkErrorLogging_ResponseParamsDataView() {}

  NetworkContext_ClearNetworkErrorLogging_ResponseParamsDataView(
      internal::NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_ClearDomainReliability_ParamsDataView {
 public:
  NetworkContext_ClearDomainReliability_ParamsDataView() {}

  NetworkContext_ClearDomainReliability_ParamsDataView(
      internal::NetworkContext_ClearDomainReliability_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilterDataView(
      ClearDataFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilter(UserType* output) {
    auto* pointer = data_->filter.Get();
    return mojo::internal::Deserialize<::network::mojom::ClearDataFilterDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::network::mojom::NetworkContext_DomainReliabilityClearMode>(
        data_value, output);
  }

  NetworkContext_DomainReliabilityClearMode mode() const {
    return static_cast<NetworkContext_DomainReliabilityClearMode>(data_->mode);
  }
 private:
  internal::NetworkContext_ClearDomainReliability_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearDomainReliability_ResponseParamsDataView {
 public:
  NetworkContext_ClearDomainReliability_ResponseParamsDataView() {}

  NetworkContext_ClearDomainReliability_ResponseParamsDataView(
      internal::NetworkContext_ClearDomainReliability_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearDomainReliability_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_GetDomainReliabilityJSON_ParamsDataView {
 public:
  NetworkContext_GetDomainReliabilityJSON_ParamsDataView() {}

  NetworkContext_GetDomainReliabilityJSON_ParamsDataView(
      internal::NetworkContext_GetDomainReliabilityJSON_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_GetDomainReliabilityJSON_Params_Data* data_ = nullptr;
};

class NetworkContext_GetDomainReliabilityJSON_ResponseParamsDataView {
 public:
  NetworkContext_GetDomainReliabilityJSON_ResponseParamsDataView() {}

  NetworkContext_GetDomainReliabilityJSON_ResponseParamsDataView(
      internal::NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      ::mojo_base::mojom::ValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = !data_->data.is_null() ? &data_->data : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::ValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_QueueReport_ParamsDataView {
 public:
  NetworkContext_QueueReport_ParamsDataView() {}

  NetworkContext_QueueReport_ParamsDataView(
      internal::NetworkContext_QueueReport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGroupDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroup(UserType* output) {
    auto* pointer = data_->group.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetUserAgentDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserAgent(UserType* output) {
    auto* pointer = data_->user_agent.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetBodyDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBody(UserType* output) {
    auto* pointer = data_->body.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_QueueReport_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_QueueSignedExchangeReport_ParamsDataView {
 public:
  NetworkContext_QueueSignedExchangeReport_ParamsDataView() {}

  NetworkContext_QueueSignedExchangeReport_ParamsDataView(
      internal::NetworkContext_QueueSignedExchangeReport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetReportDataView(
      SignedExchangeReportDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReport(UserType* output) {
    auto* pointer = data_->report.Get();
    return mojo::internal::Deserialize<::network::mojom::SignedExchangeReportDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_QueueSignedExchangeReport_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CloseAllConnections_ParamsDataView {
 public:
  NetworkContext_CloseAllConnections_ParamsDataView() {}

  NetworkContext_CloseAllConnections_ParamsDataView(
      internal::NetworkContext_CloseAllConnections_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_CloseAllConnections_Params_Data* data_ = nullptr;
};

class NetworkContext_CloseAllConnections_ResponseParamsDataView {
 public:
  NetworkContext_CloseAllConnections_ResponseParamsDataView() {}

  NetworkContext_CloseAllConnections_ResponseParamsDataView(
      internal::NetworkContext_CloseAllConnections_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_CloseAllConnections_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_CloseIdleConnections_ParamsDataView {
 public:
  NetworkContext_CloseIdleConnections_ParamsDataView() {}

  NetworkContext_CloseIdleConnections_ParamsDataView(
      internal::NetworkContext_CloseIdleConnections_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_CloseIdleConnections_Params_Data* data_ = nullptr;
};

class NetworkContext_CloseIdleConnections_ResponseParamsDataView {
 public:
  NetworkContext_CloseIdleConnections_ResponseParamsDataView() {}

  NetworkContext_CloseIdleConnections_ResponseParamsDataView(
      internal::NetworkContext_CloseIdleConnections_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_CloseIdleConnections_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_SetNetworkConditions_ParamsDataView {
 public:
  NetworkContext_SetNetworkConditions_ParamsDataView() {}

  NetworkContext_SetNetworkConditions_ParamsDataView(
      internal::NetworkContext_SetNetworkConditions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetThrottlingProfileIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadThrottlingProfileId(UserType* output) {
    auto* pointer = data_->throttling_profile_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  inline void GetConditionsDataView(
      NetworkConditionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConditions(UserType* output) {
    auto* pointer = data_->conditions.Get();
    return mojo::internal::Deserialize<::network::mojom::NetworkConditionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_SetNetworkConditions_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_SetAcceptLanguage_ParamsDataView {
 public:
  NetworkContext_SetAcceptLanguage_ParamsDataView() {}

  NetworkContext_SetAcceptLanguage_ParamsDataView(
      internal::NetworkContext_SetAcceptLanguage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNewAcceptLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewAcceptLanguage(UserType* output) {
    auto* pointer = data_->new_accept_language.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_SetAcceptLanguage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_SetEnableReferrers_ParamsDataView {
 public:
  NetworkContext_SetEnableReferrers_ParamsDataView() {}

  NetworkContext_SetEnableReferrers_ParamsDataView(
      internal::NetworkContext_SetEnableReferrers_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool enable_referrers() const {
    return data_->enable_referrers;
  }
 private:
  internal::NetworkContext_SetEnableReferrers_Params_Data* data_ = nullptr;
};

class NetworkContext_SetCTPolicy_ParamsDataView {
 public:
  NetworkContext_SetCTPolicy_ParamsDataView() {}

  NetworkContext_SetCTPolicy_ParamsDataView(
      internal::NetworkContext_SetCTPolicy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequiredHostsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequiredHosts(UserType* output) {
    auto* pointer = data_->required_hosts.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetExcludedHostsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExcludedHosts(UserType* output) {
    auto* pointer = data_->excluded_hosts.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetExcludedSpkisDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExcludedSpkis(UserType* output) {
    auto* pointer = data_->excluded_spkis.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetExcludedLegacySpkisDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExcludedLegacySpkis(UserType* output) {
    auto* pointer = data_->excluded_legacy_spkis.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_SetCTPolicy_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_AddExpectCT_ParamsDataView {
 public:
  NetworkContext_AddExpectCT_ParamsDataView() {}

  NetworkContext_AddExpectCT_ParamsDataView(
      internal::NetworkContext_AddExpectCT_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetExpiryDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExpiry(UserType* output) {
    auto* pointer = data_->expiry.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  bool enforce() const {
    return data_->enforce;
  }
  inline void GetReportUriDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReportUri(UserType* output) {
    auto* pointer = data_->report_uri.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_AddExpectCT_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_AddExpectCT_ResponseParamsDataView {
 public:
  NetworkContext_AddExpectCT_ResponseParamsDataView() {}

  NetworkContext_AddExpectCT_ResponseParamsDataView(
      internal::NetworkContext_AddExpectCT_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::NetworkContext_AddExpectCT_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_SetExpectCTTestReport_ParamsDataView {
 public:
  NetworkContext_SetExpectCTTestReport_ParamsDataView() {}

  NetworkContext_SetExpectCTTestReport_ParamsDataView(
      internal::NetworkContext_SetExpectCTTestReport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetReportUriDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReportUri(UserType* output) {
    auto* pointer = data_->report_uri.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_SetExpectCTTestReport_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_SetExpectCTTestReport_ResponseParamsDataView {
 public:
  NetworkContext_SetExpectCTTestReport_ResponseParamsDataView() {}

  NetworkContext_SetExpectCTTestReport_ResponseParamsDataView(
      internal::NetworkContext_SetExpectCTTestReport_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::NetworkContext_SetExpectCTTestReport_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_GetExpectCTState_ParamsDataView {
 public:
  NetworkContext_GetExpectCTState_ParamsDataView() {}

  NetworkContext_GetExpectCTState_ParamsDataView(
      internal::NetworkContext_GetExpectCTState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDomainDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDomain(UserType* output) {
    auto* pointer = data_->domain.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_GetExpectCTState_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_GetExpectCTState_ResponseParamsDataView {
 public:
  NetworkContext_GetExpectCTState_ResponseParamsDataView() {}

  NetworkContext_GetExpectCTState_ResponseParamsDataView(
      internal::NetworkContext_GetExpectCTState_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStateDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_GetExpectCTState_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateUDPSocket_ParamsDataView {
 public:
  NetworkContext_CreateUDPSocket_ParamsDataView() {}

  NetworkContext_CreateUDPSocket_ParamsDataView(
      internal::NetworkContext_CreateUDPSocket_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::UDPSocketRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::UDPSocketReceiverPtrDataView>(
            &data_->receiver, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateUDPSocket_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateTCPServerSocket_ParamsDataView {
 public:
  NetworkContext_CreateTCPServerSocket_ParamsDataView() {}

  NetworkContext_CreateTCPServerSocket_ParamsDataView(
      internal::NetworkContext_CreateTCPServerSocket_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocalAddrDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddr(UserType* output) {
    auto* pointer = data_->local_addr.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  uint32_t backlog() const {
    return data_->backlog;
  }
  inline void GetTrafficAnnotationDataView(
      ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrafficAnnotation(UserType* output) {
    auto* pointer = data_->traffic_annotation.Get();
    return mojo::internal::Deserialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSocket() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TCPServerSocketRequestDataView>(
            &data_->socket, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateTCPServerSocket_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateTCPServerSocket_ResponseParamsDataView {
 public:
  NetworkContext_CreateTCPServerSocket_ResponseParamsDataView() {}

  NetworkContext_CreateTCPServerSocket_ResponseParamsDataView(
      internal::NetworkContext_CreateTCPServerSocket_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
  inline void GetLocalAddrOutDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddrOut(UserType* output) {
    auto* pointer = data_->local_addr_out.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_CreateTCPServerSocket_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateTCPConnectedSocket_ParamsDataView {
 public:
  NetworkContext_CreateTCPConnectedSocket_ParamsDataView() {}

  NetworkContext_CreateTCPConnectedSocket_ParamsDataView(
      internal::NetworkContext_CreateTCPConnectedSocket_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocalAddrDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddr(UserType* output) {
    auto* pointer = data_->local_addr.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetRemoteAddrListDataView(
      ::network::mojom::AddressListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRemoteAddrList(UserType* output) {
    auto* pointer = data_->remote_addr_list.Get();
    return mojo::internal::Deserialize<::network::mojom::AddressListDataView>(
        pointer, output, context_);
  }
  inline void GetTcpConnectedSocketOptionsDataView(
      ::network::mojom::TCPConnectedSocketOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTcpConnectedSocketOptions(UserType* output) {
    auto* pointer = data_->tcp_connected_socket_options.Get();
    return mojo::internal::Deserialize<::network::mojom::TCPConnectedSocketOptionsDataView>(
        pointer, output, context_);
  }
  inline void GetTrafficAnnotationDataView(
      ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrafficAnnotation(UserType* output) {
    auto* pointer = data_->traffic_annotation.Get();
    return mojo::internal::Deserialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSocket() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TCPConnectedSocketRequestDataView>(
            &data_->socket, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::SocketObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateTCPConnectedSocket_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateTCPConnectedSocket_ResponseParamsDataView {
 public:
  NetworkContext_CreateTCPConnectedSocket_ResponseParamsDataView() {}

  NetworkContext_CreateTCPConnectedSocket_ResponseParamsDataView(
      internal::NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
  inline void GetLocalAddrDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddr(UserType* output) {
    auto* pointer = data_->local_addr.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetPeerAddrDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPeerAddr(UserType* output) {
    auto* pointer = data_->peer_addr.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  mojo::ScopedDataPipeConsumerHandle TakeReceiveStream() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->receive_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeProducerHandle TakeSendStream() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->send_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateTCPBoundSocket_ParamsDataView {
 public:
  NetworkContext_CreateTCPBoundSocket_ParamsDataView() {}

  NetworkContext_CreateTCPBoundSocket_ParamsDataView(
      internal::NetworkContext_CreateTCPBoundSocket_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocalAddrDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddr(UserType* output) {
    auto* pointer = data_->local_addr.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetTrafficAnnotationDataView(
      ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrafficAnnotation(UserType* output) {
    auto* pointer = data_->traffic_annotation.Get();
    return mojo::internal::Deserialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSocket() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TCPBoundSocketRequestDataView>(
            &data_->socket, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateTCPBoundSocket_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateTCPBoundSocket_ResponseParamsDataView {
 public:
  NetworkContext_CreateTCPBoundSocket_ResponseParamsDataView() {}

  NetworkContext_CreateTCPBoundSocket_ResponseParamsDataView(
      internal::NetworkContext_CreateTCPBoundSocket_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
  inline void GetLocalAddrDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddr(UserType* output) {
    auto* pointer = data_->local_addr.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_CreateTCPBoundSocket_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateProxyResolvingSocketFactory_ParamsDataView {
 public:
  NetworkContext_CreateProxyResolvingSocketFactory_ParamsDataView() {}

  NetworkContext_CreateProxyResolvingSocketFactory_ParamsDataView(
      internal::NetworkContext_CreateProxyResolvingSocketFactory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::ProxyResolvingSocketFactoryRequestDataView>(
            &data_->factory, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateProxyResolvingSocketFactory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_LookUpProxyForURL_ParamsDataView {
 public:
  NetworkContext_LookUpProxyForURL_ParamsDataView() {}

  NetworkContext_LookUpProxyForURL_ParamsDataView(
      internal::NetworkContext_LookUpProxyForURL_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeProxyLookupClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::ProxyLookupClientPtrDataView>(
            &data_->proxy_lookup_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_LookUpProxyForURL_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ForceReloadProxyConfig_ParamsDataView {
 public:
  NetworkContext_ForceReloadProxyConfig_ParamsDataView() {}

  NetworkContext_ForceReloadProxyConfig_ParamsDataView(
      internal::NetworkContext_ForceReloadProxyConfig_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ForceReloadProxyConfig_Params_Data* data_ = nullptr;
};

class NetworkContext_ForceReloadProxyConfig_ResponseParamsDataView {
 public:
  NetworkContext_ForceReloadProxyConfig_ResponseParamsDataView() {}

  NetworkContext_ForceReloadProxyConfig_ResponseParamsDataView(
      internal::NetworkContext_ForceReloadProxyConfig_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ForceReloadProxyConfig_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_ClearBadProxiesCache_ParamsDataView {
 public:
  NetworkContext_ClearBadProxiesCache_ParamsDataView() {}

  NetworkContext_ClearBadProxiesCache_ParamsDataView(
      internal::NetworkContext_ClearBadProxiesCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearBadProxiesCache_Params_Data* data_ = nullptr;
};

class NetworkContext_ClearBadProxiesCache_ResponseParamsDataView {
 public:
  NetworkContext_ClearBadProxiesCache_ResponseParamsDataView() {}

  NetworkContext_ClearBadProxiesCache_ResponseParamsDataView(
      internal::NetworkContext_ClearBadProxiesCache_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearBadProxiesCache_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_CreateWebSocket_ParamsDataView {
 public:
  NetworkContext_CreateWebSocket_ParamsDataView() {}

  NetworkContext_CreateWebSocket_ParamsDataView(
      internal::NetworkContext_CreateWebSocket_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::WebSocketRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  int32_t process_id() const {
    return data_->process_id;
  }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  uint32_t options() const {
    return data_->options;
  }
  template <typename UserType>
  UserType TakeAuthHandler() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::AuthenticationHandlerPtrDataView>(
            &data_->auth_handler, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeHeaderClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TrustedHeaderClientPtrDataView>(
            &data_->header_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateWebSocket_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateNetLogExporter_ParamsDataView {
 public:
  NetworkContext_CreateNetLogExporter_ParamsDataView() {}

  NetworkContext_CreateNetLogExporter_ParamsDataView(
      internal::NetworkContext_CreateNetLogExporter_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeExporter() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::NetLogExporterRequestDataView>(
            &data_->exporter, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateNetLogExporter_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_PreconnectSockets_ParamsDataView {
 public:
  NetworkContext_PreconnectSockets_ParamsDataView() {}

  NetworkContext_PreconnectSockets_ParamsDataView(
      internal::NetworkContext_PreconnectSockets_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t num_streams() const {
    return data_->num_streams;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int32_t load_flags() const {
    return data_->load_flags;
  }
  bool privacy_mode_enabled() const {
    return data_->privacy_mode_enabled;
  }
 private:
  internal::NetworkContext_PreconnectSockets_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateP2PSocketManager_ParamsDataView {
 public:
  NetworkContext_CreateP2PSocketManager_ParamsDataView() {}

  NetworkContext_CreateP2PSocketManager_ParamsDataView(
      internal::NetworkContext_CreateP2PSocketManager_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::P2PTrustedSocketManagerClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeTrustedSocketManager() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::P2PTrustedSocketManagerRequestDataView>(
            &data_->trusted_socket_manager, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeSocketManager() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::P2PSocketManagerRequestDataView>(
            &data_->socket_manager, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateP2PSocketManager_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateMdnsResponder_ParamsDataView {
 public:
  NetworkContext_CreateMdnsResponder_ParamsDataView() {}

  NetworkContext_CreateMdnsResponder_ParamsDataView(
      internal::NetworkContext_CreateMdnsResponder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeResponderRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::MdnsResponderRequestDataView>(
            &data_->responder_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateMdnsResponder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ResolveHost_ParamsDataView {
 public:
  NetworkContext_ResolveHost_ParamsDataView() {}

  NetworkContext_ResolveHost_ParamsDataView(
      internal::NetworkContext_ResolveHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostDataView(
      ::network::mojom::HostPortPairDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<::network::mojom::HostPortPairDataView>(
        pointer, output, context_);
  }
  inline void GetOptionalParametersDataView(
      ::network::mojom::ResolveHostParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptionalParameters(UserType* output) {
    auto* pointer = data_->optional_parameters.Get();
    return mojo::internal::Deserialize<::network::mojom::ResolveHostParametersDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeResponseClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::ResolveHostClientPtrDataView>(
            &data_->response_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_ResolveHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateHostResolver_ParamsDataView {
 public:
  NetworkContext_CreateHostResolver_ParamsDataView() {}

  NetworkContext_CreateHostResolver_ParamsDataView(
      internal::NetworkContext_CreateHostResolver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigOverridesDataView(
      ::network::mojom::DnsConfigOverridesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfigOverrides(UserType* output) {
    auto* pointer = data_->config_overrides.Get();
    return mojo::internal::Deserialize<::network::mojom::DnsConfigOverridesDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeHostResolver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::HostResolverRequestDataView>(
            &data_->host_resolver, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateHostResolver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_VerifyCertForSignedExchange_ParamsDataView {
 public:
  NetworkContext_VerifyCertForSignedExchange_ParamsDataView() {}

  NetworkContext_VerifyCertForSignedExchange_ParamsDataView(
      internal::NetworkContext_VerifyCertForSignedExchange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCertificateDataView(
      ::network::mojom::X509CertificateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCertificate(UserType* output) {
    auto* pointer = data_->certificate.Get();
    return mojo::internal::Deserialize<::network::mojom::X509CertificateDataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetOcspResponseDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOcspResponse(UserType* output) {
    auto* pointer = data_->ocsp_response.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSctListDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSctList(UserType* output) {
    auto* pointer = data_->sct_list.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_VerifyCertForSignedExchange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_VerifyCertForSignedExchange_ResponseParamsDataView {
 public:
  NetworkContext_VerifyCertForSignedExchange_ResponseParamsDataView() {}

  NetworkContext_VerifyCertForSignedExchange_ResponseParamsDataView(
      internal::NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t error_code() const {
    return data_->error_code;
  }
  inline void GetCvResultDataView(
      ::network::mojom::CertVerifyResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCvResult(UserType* output) {
    auto* pointer = data_->cv_result.Get();
    return mojo::internal::Deserialize<::network::mojom::CertVerifyResultDataView>(
        pointer, output, context_);
  }
  inline void GetCtResultDataView(
      ::network::mojom::CTVerifyResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCtResult(UserType* output) {
    auto* pointer = data_->ct_result.Get();
    return mojo::internal::Deserialize<::network::mojom::CTVerifyResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_AddHSTS_ParamsDataView {
 public:
  NetworkContext_AddHSTS_ParamsDataView() {}

  NetworkContext_AddHSTS_ParamsDataView(
      internal::NetworkContext_AddHSTS_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetExpiryDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExpiry(UserType* output) {
    auto* pointer = data_->expiry.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  bool include_subdomains() const {
    return data_->include_subdomains;
  }
 private:
  internal::NetworkContext_AddHSTS_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_AddHSTS_ResponseParamsDataView {
 public:
  NetworkContext_AddHSTS_ResponseParamsDataView() {}

  NetworkContext_AddHSTS_ResponseParamsDataView(
      internal::NetworkContext_AddHSTS_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_AddHSTS_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_IsHSTSActiveForHost_ParamsDataView {
 public:
  NetworkContext_IsHSTSActiveForHost_ParamsDataView() {}

  NetworkContext_IsHSTSActiveForHost_ParamsDataView(
      internal::NetworkContext_IsHSTSActiveForHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_IsHSTSActiveForHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_IsHSTSActiveForHost_ResponseParamsDataView {
 public:
  NetworkContext_IsHSTSActiveForHost_ResponseParamsDataView() {}

  NetworkContext_IsHSTSActiveForHost_ResponseParamsDataView(
      internal::NetworkContext_IsHSTSActiveForHost_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::NetworkContext_IsHSTSActiveForHost_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_GetHSTSState_ParamsDataView {
 public:
  NetworkContext_GetHSTSState_ParamsDataView() {}

  NetworkContext_GetHSTSState_ParamsDataView(
      internal::NetworkContext_GetHSTSState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDomainDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDomain(UserType* output) {
    auto* pointer = data_->domain.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_GetHSTSState_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_GetHSTSState_ResponseParamsDataView {
 public:
  NetworkContext_GetHSTSState_ResponseParamsDataView() {}

  NetworkContext_GetHSTSState_ResponseParamsDataView(
      internal::NetworkContext_GetHSTSState_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStateDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_GetHSTSState_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_SetCorsOriginAccessListsForOrigin_ParamsDataView {
 public:
  NetworkContext_SetCorsOriginAccessListsForOrigin_ParamsDataView() {}

  NetworkContext_SetCorsOriginAccessListsForOrigin_ParamsDataView(
      internal::NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceOrigin(UserType* output) {
    auto* pointer = data_->source_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetAllowPatternsDataView(
      mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllowPatterns(UserType* output) {
    auto* pointer = data_->allow_patterns.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>>(
        pointer, output, context_);
  }
  inline void GetBlockPatternsDataView(
      mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlockPatterns(UserType* output) {
    auto* pointer = data_->block_patterns.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParamsDataView {
 public:
  NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParamsDataView() {}

  NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParamsDataView(
      internal::NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_DeleteDynamicDataForHost_ParamsDataView {
 public:
  NetworkContext_DeleteDynamicDataForHost_ParamsDataView() {}

  NetworkContext_DeleteDynamicDataForHost_ParamsDataView(
      internal::NetworkContext_DeleteDynamicDataForHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_DeleteDynamicDataForHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_DeleteDynamicDataForHost_ResponseParamsDataView {
 public:
  NetworkContext_DeleteDynamicDataForHost_ResponseParamsDataView() {}

  NetworkContext_DeleteDynamicDataForHost_ResponseParamsDataView(
      internal::NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_SaveHttpAuthCache_ParamsDataView {
 public:
  NetworkContext_SaveHttpAuthCache_ParamsDataView() {}

  NetworkContext_SaveHttpAuthCache_ParamsDataView(
      internal::NetworkContext_SaveHttpAuthCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_SaveHttpAuthCache_Params_Data* data_ = nullptr;
};

class NetworkContext_SaveHttpAuthCache_ResponseParamsDataView {
 public:
  NetworkContext_SaveHttpAuthCache_ResponseParamsDataView() {}

  NetworkContext_SaveHttpAuthCache_ResponseParamsDataView(
      internal::NetworkContext_SaveHttpAuthCache_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCacheKeyDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheKey(UserType* output) {
    auto* pointer = data_->cache_key.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_SaveHttpAuthCache_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_LoadHttpAuthCache_ParamsDataView {
 public:
  NetworkContext_LoadHttpAuthCache_ParamsDataView() {}

  NetworkContext_LoadHttpAuthCache_ParamsDataView(
      internal::NetworkContext_LoadHttpAuthCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCacheKeyDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheKey(UserType* output) {
    auto* pointer = data_->cache_key.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_LoadHttpAuthCache_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_LoadHttpAuthCache_ResponseParamsDataView {
 public:
  NetworkContext_LoadHttpAuthCache_ResponseParamsDataView() {}

  NetworkContext_LoadHttpAuthCache_ResponseParamsDataView(
      internal::NetworkContext_LoadHttpAuthCache_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_LoadHttpAuthCache_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_LookupBasicAuthCredentials_ParamsDataView {
 public:
  NetworkContext_LookupBasicAuthCredentials_ParamsDataView() {}

  NetworkContext_LookupBasicAuthCredentials_ParamsDataView(
      internal::NetworkContext_LookupBasicAuthCredentials_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_LookupBasicAuthCredentials_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_LookupBasicAuthCredentials_ResponseParamsDataView {
 public:
  NetworkContext_LookupBasicAuthCredentials_ResponseParamsDataView() {}

  NetworkContext_LookupBasicAuthCredentials_ResponseParamsDataView(
      internal::NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCredentialsDataView(
      ::network::mojom::AuthCredentialsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCredentials(UserType* output) {
    auto* pointer = data_->credentials.Get();
    return mojo::internal::Deserialize<::network::mojom::AuthCredentialsDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_EnableStaticKeyPinningForTesting_ParamsDataView {
 public:
  NetworkContext_EnableStaticKeyPinningForTesting_ParamsDataView() {}

  NetworkContext_EnableStaticKeyPinningForTesting_ParamsDataView(
      internal::NetworkContext_EnableStaticKeyPinningForTesting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_EnableStaticKeyPinningForTesting_Params_Data* data_ = nullptr;
};

class NetworkContext_EnableStaticKeyPinningForTesting_ResponseParamsDataView {
 public:
  NetworkContext_EnableStaticKeyPinningForTesting_ResponseParamsDataView() {}

  NetworkContext_EnableStaticKeyPinningForTesting_ResponseParamsDataView(
      internal::NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_SetFailingHttpTransactionForTesting_ParamsDataView {
 public:
  NetworkContext_SetFailingHttpTransactionForTesting_ParamsDataView() {}

  NetworkContext_SetFailingHttpTransactionForTesting_ParamsDataView(
      internal::NetworkContext_SetFailingHttpTransactionForTesting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t rv() const {
    return data_->rv;
  }
 private:
  internal::NetworkContext_SetFailingHttpTransactionForTesting_Params_Data* data_ = nullptr;
};

class NetworkContext_SetFailingHttpTransactionForTesting_ResponseParamsDataView {
 public:
  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParamsDataView() {}

  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParamsDataView(
      internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_VerifyCertificateForTesting_ParamsDataView {
 public:
  NetworkContext_VerifyCertificateForTesting_ParamsDataView() {}

  NetworkContext_VerifyCertificateForTesting_ParamsDataView(
      internal::NetworkContext_VerifyCertificateForTesting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCertificateDataView(
      ::network::mojom::X509CertificateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCertificate(UserType* output) {
    auto* pointer = data_->certificate.Get();
    return mojo::internal::Deserialize<::network::mojom::X509CertificateDataView>(
        pointer, output, context_);
  }
  inline void GetHostnameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostname(UserType* output) {
    auto* pointer = data_->hostname.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOcspResponseDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOcspResponse(UserType* output) {
    auto* pointer = data_->ocsp_response.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_VerifyCertificateForTesting_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_VerifyCertificateForTesting_ResponseParamsDataView {
 public:
  NetworkContext_VerifyCertificateForTesting_ResponseParamsDataView() {}

  NetworkContext_VerifyCertificateForTesting_ResponseParamsDataView(
      internal::NetworkContext_VerifyCertificateForTesting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t error_code() const {
    return data_->error_code;
  }
 private:
  internal::NetworkContext_VerifyCertificateForTesting_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_AddDomainReliabilityContextForTesting_ParamsDataView {
 public:
  NetworkContext_AddDomainReliabilityContextForTesting_ParamsDataView() {}

  NetworkContext_AddDomainReliabilityContextForTesting_ParamsDataView(
      internal::NetworkContext_AddDomainReliabilityContextForTesting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetUploadUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUploadUrl(UserType* output) {
    auto* pointer = data_->upload_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_AddDomainReliabilityContextForTesting_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_AddDomainReliabilityContextForTesting_ResponseParamsDataView {
 public:
  NetworkContext_AddDomainReliabilityContextForTesting_ResponseParamsDataView() {}

  NetworkContext_AddDomainReliabilityContextForTesting_ResponseParamsDataView(
      internal::NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_ForceDomainReliabilityUploadsForTesting_ParamsDataView {
 public:
  NetworkContext_ForceDomainReliabilityUploadsForTesting_ParamsDataView() {}

  NetworkContext_ForceDomainReliabilityUploadsForTesting_ParamsDataView(
      internal::NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data* data_ = nullptr;
};

class NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParamsDataView {
 public:
  NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParamsDataView() {}

  NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParamsDataView(
      internal::NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_GetOriginPolicyManager_ParamsDataView {
 public:
  NetworkContext_GetOriginPolicyManager_ParamsDataView() {}

  NetworkContext_GetOriginPolicyManager_ParamsDataView(
      internal::NetworkContext_GetOriginPolicyManager_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeOriginPolicyManager() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::OriginPolicyManagerRequestDataView>(
            &data_->origin_policy_manager, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_GetOriginPolicyManager_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void CustomProxyConfigClient_OnCustomProxyConfigUpdated_ParamsDataView::GetProxyConfigDataView(
    CustomProxyConfigDataView* output) {
  auto pointer = data_->proxy_config.Get();
  *output = CustomProxyConfigDataView(pointer, context_);
}


inline void CustomProxyConfigClient_MarkProxiesAsBad_ParamsDataView::GetBypassDurationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->bypass_duration.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void CustomProxyConfigClient_MarkProxiesAsBad_ParamsDataView::GetBadProxiesDataView(
    ::network::mojom::ProxyListDataView* output) {
  auto pointer = data_->bad_proxies.Get();
  *output = ::network::mojom::ProxyListDataView(pointer, context_);
}






inline void TrustedHeaderClient_OnBeforeSendHeaders_ParamsDataView::GetHeadersDataView(
    ::network::mojom::HttpRequestHeadersDataView* output) {
  auto pointer = data_->headers.Get();
  *output = ::network::mojom::HttpRequestHeadersDataView(pointer, context_);
}


inline void TrustedHeaderClient_OnBeforeSendHeaders_ResponseParamsDataView::GetHeadersDataView(
    ::network::mojom::HttpRequestHeadersDataView* output) {
  auto pointer = data_->headers.Get();
  *output = ::network::mojom::HttpRequestHeadersDataView(pointer, context_);
}


inline void TrustedHeaderClient_OnHeadersReceived_ParamsDataView::GetHeadersDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->headers.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void TrustedHeaderClient_OnHeadersReceived_ResponseParamsDataView::GetHeadersDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->headers.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TrustedHeaderClient_OnHeadersReceived_ResponseParamsDataView::GetAllowedUnsafeRedirectUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->allowed_unsafe_redirect_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void NetworkContextClient_OnCanSendReportingReports_ParamsDataView::GetOriginsDataView(
    mojo::ArrayDataView<::url::mojom::OriginDataView>* output) {
  auto pointer = data_->origins.Get();
  *output = mojo::ArrayDataView<::url::mojom::OriginDataView>(pointer, context_);
}


inline void NetworkContextClient_OnCanSendReportingReports_ResponseParamsDataView::GetOriginsDataView(
    mojo::ArrayDataView<::url::mojom::OriginDataView>* output) {
  auto pointer = data_->origins.Get();
  *output = mojo::ArrayDataView<::url::mojom::OriginDataView>(pointer, context_);
}


inline void NetworkContextClient_OnCanSendDomainReliabilityUpload_ParamsDataView::GetOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}






inline void NetworkContext_CreateURLLoaderFactory_ParamsDataView::GetParamsDataView(
    URLLoaderFactoryParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = URLLoaderFactoryParamsDataView(pointer, context_);
}






inline void NetworkContext_GetRestrictedCookieManager_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}


inline void NetworkContext_ClearNetworkingHistorySince_ParamsDataView::GetStartTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->start_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}




inline void NetworkContext_ClearHttpCache_ParamsDataView::GetStartTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->start_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void NetworkContext_ClearHttpCache_ParamsDataView::GetEndTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->end_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void NetworkContext_ClearHttpCache_ParamsDataView::GetFilterDataView(
    ClearDataFilterDataView* output) {
  auto pointer = data_->filter.Get();
  *output = ClearDataFilterDataView(pointer, context_);
}




inline void NetworkContext_ComputeHttpCacheSize_ParamsDataView::GetStartTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->start_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void NetworkContext_ComputeHttpCacheSize_ParamsDataView::GetEndTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->end_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}




inline void NetworkContext_NotifyExternalCacheHit_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NetworkContext_NotifyExternalCacheHit_ParamsDataView::GetHttpMethodDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->http_method.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContext_NotifyExternalCacheHit_ParamsDataView::GetTopFrameOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->top_frame_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}


inline void NetworkContext_WriteCacheMetadata_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NetworkContext_WriteCacheMetadata_ParamsDataView::GetExpectedResponseTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->expected_response_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void NetworkContext_WriteCacheMetadata_ParamsDataView::GetDataDataView(
    ::mojo_base::mojom::BigBufferDataView* output) {
  auto pointer = &data_->data;
  *output = ::mojo_base::mojom::BigBufferDataView(pointer, context_);
}


inline void NetworkContext_ClearHostCache_ParamsDataView::GetFilterDataView(
    ClearDataFilterDataView* output) {
  auto pointer = data_->filter.Get();
  *output = ClearDataFilterDataView(pointer, context_);
}




inline void NetworkContext_ClearHttpAuthCache_ParamsDataView::GetStartTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->start_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}




inline void NetworkContext_ClearReportingCacheReports_ParamsDataView::GetFilterDataView(
    ClearDataFilterDataView* output) {
  auto pointer = data_->filter.Get();
  *output = ClearDataFilterDataView(pointer, context_);
}




inline void NetworkContext_ClearReportingCacheClients_ParamsDataView::GetFilterDataView(
    ClearDataFilterDataView* output) {
  auto pointer = data_->filter.Get();
  *output = ClearDataFilterDataView(pointer, context_);
}




inline void NetworkContext_ClearNetworkErrorLogging_ParamsDataView::GetFilterDataView(
    ClearDataFilterDataView* output) {
  auto pointer = data_->filter.Get();
  *output = ClearDataFilterDataView(pointer, context_);
}




inline void NetworkContext_ClearDomainReliability_ParamsDataView::GetFilterDataView(
    ClearDataFilterDataView* output) {
  auto pointer = data_->filter.Get();
  *output = ClearDataFilterDataView(pointer, context_);
}






inline void NetworkContext_GetDomainReliabilityJSON_ResponseParamsDataView::GetDataDataView(
    ::mojo_base::mojom::ValueDataView* output) {
  auto pointer = &data_->data;
  *output = ::mojo_base::mojom::ValueDataView(pointer, context_);
}


inline void NetworkContext_QueueReport_ParamsDataView::GetTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContext_QueueReport_ParamsDataView::GetGroupDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContext_QueueReport_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NetworkContext_QueueReport_ParamsDataView::GetUserAgentDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_agent.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContext_QueueReport_ParamsDataView::GetBodyDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->body.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}


inline void NetworkContext_QueueSignedExchangeReport_ParamsDataView::GetReportDataView(
    SignedExchangeReportDataView* output) {
  auto pointer = data_->report.Get();
  *output = SignedExchangeReportDataView(pointer, context_);
}










inline void NetworkContext_SetNetworkConditions_ParamsDataView::GetThrottlingProfileIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->throttling_profile_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void NetworkContext_SetNetworkConditions_ParamsDataView::GetConditionsDataView(
    NetworkConditionsDataView* output) {
  auto pointer = data_->conditions.Get();
  *output = NetworkConditionsDataView(pointer, context_);
}


inline void NetworkContext_SetAcceptLanguage_ParamsDataView::GetNewAcceptLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->new_accept_language.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void NetworkContext_SetCTPolicy_ParamsDataView::GetRequiredHostsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->required_hosts.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void NetworkContext_SetCTPolicy_ParamsDataView::GetExcludedHostsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->excluded_hosts.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void NetworkContext_SetCTPolicy_ParamsDataView::GetExcludedSpkisDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->excluded_spkis.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void NetworkContext_SetCTPolicy_ParamsDataView::GetExcludedLegacySpkisDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->excluded_legacy_spkis.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void NetworkContext_AddExpectCT_ParamsDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContext_AddExpectCT_ParamsDataView::GetExpiryDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->expiry.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void NetworkContext_AddExpectCT_ParamsDataView::GetReportUriDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->report_uri.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void NetworkContext_SetExpectCTTestReport_ParamsDataView::GetReportUriDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->report_uri.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void NetworkContext_GetExpectCTState_ParamsDataView::GetDomainDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->domain.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NetworkContext_GetExpectCTState_ResponseParamsDataView::GetStateDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->state.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}




inline void NetworkContext_CreateTCPServerSocket_ParamsDataView::GetLocalAddrDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->local_addr.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}
inline void NetworkContext_CreateTCPServerSocket_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}


inline void NetworkContext_CreateTCPServerSocket_ResponseParamsDataView::GetLocalAddrOutDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->local_addr_out.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}


inline void NetworkContext_CreateTCPConnectedSocket_ParamsDataView::GetLocalAddrDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->local_addr.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}
inline void NetworkContext_CreateTCPConnectedSocket_ParamsDataView::GetRemoteAddrListDataView(
    ::network::mojom::AddressListDataView* output) {
  auto pointer = data_->remote_addr_list.Get();
  *output = ::network::mojom::AddressListDataView(pointer, context_);
}
inline void NetworkContext_CreateTCPConnectedSocket_ParamsDataView::GetTcpConnectedSocketOptionsDataView(
    ::network::mojom::TCPConnectedSocketOptionsDataView* output) {
  auto pointer = data_->tcp_connected_socket_options.Get();
  *output = ::network::mojom::TCPConnectedSocketOptionsDataView(pointer, context_);
}
inline void NetworkContext_CreateTCPConnectedSocket_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}


inline void NetworkContext_CreateTCPConnectedSocket_ResponseParamsDataView::GetLocalAddrDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->local_addr.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}
inline void NetworkContext_CreateTCPConnectedSocket_ResponseParamsDataView::GetPeerAddrDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->peer_addr.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}


inline void NetworkContext_CreateTCPBoundSocket_ParamsDataView::GetLocalAddrDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->local_addr.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}
inline void NetworkContext_CreateTCPBoundSocket_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}


inline void NetworkContext_CreateTCPBoundSocket_ResponseParamsDataView::GetLocalAddrDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->local_addr.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}




inline void NetworkContext_LookUpProxyForURL_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}










inline void NetworkContext_CreateWebSocket_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}




inline void NetworkContext_PreconnectSockets_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}






inline void NetworkContext_ResolveHost_ParamsDataView::GetHostDataView(
    ::network::mojom::HostPortPairDataView* output) {
  auto pointer = data_->host.Get();
  *output = ::network::mojom::HostPortPairDataView(pointer, context_);
}
inline void NetworkContext_ResolveHost_ParamsDataView::GetOptionalParametersDataView(
    ::network::mojom::ResolveHostParametersDataView* output) {
  auto pointer = data_->optional_parameters.Get();
  *output = ::network::mojom::ResolveHostParametersDataView(pointer, context_);
}


inline void NetworkContext_CreateHostResolver_ParamsDataView::GetConfigOverridesDataView(
    ::network::mojom::DnsConfigOverridesDataView* output) {
  auto pointer = data_->config_overrides.Get();
  *output = ::network::mojom::DnsConfigOverridesDataView(pointer, context_);
}


inline void NetworkContext_VerifyCertForSignedExchange_ParamsDataView::GetCertificateDataView(
    ::network::mojom::X509CertificateDataView* output) {
  auto pointer = data_->certificate.Get();
  *output = ::network::mojom::X509CertificateDataView(pointer, context_);
}
inline void NetworkContext_VerifyCertForSignedExchange_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NetworkContext_VerifyCertForSignedExchange_ParamsDataView::GetOcspResponseDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->ocsp_response.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContext_VerifyCertForSignedExchange_ParamsDataView::GetSctListDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sct_list.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NetworkContext_VerifyCertForSignedExchange_ResponseParamsDataView::GetCvResultDataView(
    ::network::mojom::CertVerifyResultDataView* output) {
  auto pointer = data_->cv_result.Get();
  *output = ::network::mojom::CertVerifyResultDataView(pointer, context_);
}
inline void NetworkContext_VerifyCertForSignedExchange_ResponseParamsDataView::GetCtResultDataView(
    ::network::mojom::CTVerifyResultDataView* output) {
  auto pointer = data_->ct_result.Get();
  *output = ::network::mojom::CTVerifyResultDataView(pointer, context_);
}


inline void NetworkContext_AddHSTS_ParamsDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContext_AddHSTS_ParamsDataView::GetExpiryDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->expiry.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}




inline void NetworkContext_IsHSTSActiveForHost_ParamsDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void NetworkContext_GetHSTSState_ParamsDataView::GetDomainDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->domain.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NetworkContext_GetHSTSState_ResponseParamsDataView::GetStateDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->state.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}


inline void NetworkContext_SetCorsOriginAccessListsForOrigin_ParamsDataView::GetSourceOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->source_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void NetworkContext_SetCorsOriginAccessListsForOrigin_ParamsDataView::GetAllowPatternsDataView(
    mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>* output) {
  auto pointer = data_->allow_patterns.Get();
  *output = mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>(pointer, context_);
}
inline void NetworkContext_SetCorsOriginAccessListsForOrigin_ParamsDataView::GetBlockPatternsDataView(
    mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>* output) {
  auto pointer = data_->block_patterns.Get();
  *output = mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>(pointer, context_);
}




inline void NetworkContext_DeleteDynamicDataForHost_ParamsDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void NetworkContext_SaveHttpAuthCache_ResponseParamsDataView::GetCacheKeyDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->cache_key.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void NetworkContext_LoadHttpAuthCache_ParamsDataView::GetCacheKeyDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->cache_key.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}




inline void NetworkContext_LookupBasicAuthCredentials_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void NetworkContext_LookupBasicAuthCredentials_ResponseParamsDataView::GetCredentialsDataView(
    ::network::mojom::AuthCredentialsDataView* output) {
  auto pointer = data_->credentials.Get();
  *output = ::network::mojom::AuthCredentialsDataView(pointer, context_);
}










inline void NetworkContext_VerifyCertificateForTesting_ParamsDataView::GetCertificateDataView(
    ::network::mojom::X509CertificateDataView* output) {
  auto pointer = data_->certificate.Get();
  *output = ::network::mojom::X509CertificateDataView(pointer, context_);
}
inline void NetworkContext_VerifyCertificateForTesting_ParamsDataView::GetHostnameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->hostname.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContext_VerifyCertificateForTesting_ParamsDataView::GetOcspResponseDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->ocsp_response.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void NetworkContext_AddDomainReliabilityContextForTesting_ParamsDataView::GetOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NetworkContext_AddDomainReliabilityContextForTesting_ParamsDataView::GetUploadUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->upload_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}









}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_PARAMS_DATA_H_