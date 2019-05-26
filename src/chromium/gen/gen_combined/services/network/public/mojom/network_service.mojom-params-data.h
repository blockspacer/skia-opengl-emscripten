// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_PARAMS_DATA_H_

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
class  SSLPrivateKey_Sign_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SSLPrivateKey_Sign_Params_Data));
      new (data()) SSLPrivateKey_Sign_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SSLPrivateKey_Sign_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SSLPrivateKey_Sign_Params_Data>(index_);
    }
    SSLPrivateKey_Sign_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint16_t algorithm;
  uint8_t pad0_[6];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> input;

 private:
  SSLPrivateKey_Sign_Params_Data();
  ~SSLPrivateKey_Sign_Params_Data() = delete;
};
static_assert(sizeof(SSLPrivateKey_Sign_Params_Data) == 24,
              "Bad sizeof(SSLPrivateKey_Sign_Params_Data)");
class  SSLPrivateKey_Sign_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SSLPrivateKey_Sign_ResponseParams_Data));
      new (data()) SSLPrivateKey_Sign_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SSLPrivateKey_Sign_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SSLPrivateKey_Sign_ResponseParams_Data>(index_);
    }
    SSLPrivateKey_Sign_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> signature;

 private:
  SSLPrivateKey_Sign_ResponseParams_Data();
  ~SSLPrivateKey_Sign_ResponseParams_Data() = delete;
};
static_assert(sizeof(SSLPrivateKey_Sign_ResponseParams_Data) == 24,
              "Bad sizeof(SSLPrivateKey_Sign_ResponseParams_Data)");
class  AuthChallengeResponder_OnAuthCredentials_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AuthChallengeResponder_OnAuthCredentials_Params_Data));
      new (data()) AuthChallengeResponder_OnAuthCredentials_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AuthChallengeResponder_OnAuthCredentials_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AuthChallengeResponder_OnAuthCredentials_Params_Data>(index_);
    }
    AuthChallengeResponder_OnAuthCredentials_Params_Data* operator->() { return data(); }

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
  AuthChallengeResponder_OnAuthCredentials_Params_Data();
  ~AuthChallengeResponder_OnAuthCredentials_Params_Data() = delete;
};
static_assert(sizeof(AuthChallengeResponder_OnAuthCredentials_Params_Data) == 16,
              "Bad sizeof(AuthChallengeResponder_OnAuthCredentials_Params_Data)");
class  NetworkServiceClient_OnAuthRequired_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnAuthRequired_Params_Data));
      new (data()) NetworkServiceClient_OnAuthRequired_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnAuthRequired_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnAuthRequired_Params_Data>(index_);
    }
    NetworkServiceClient_OnAuthRequired_Params_Data* operator->() { return data(); }

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
  uint32_t request_id;
  uint8_t first_auth_attempt : 1;
  uint8_t pad3_[3];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::network::mojom::internal::AuthChallengeInfo_Data> auth_info;
  mojo::internal::Pointer<::network::mojom::internal::URLResponseHead_Data> head;
  mojo::internal::Interface_Data auth_challenge_responder;

 private:
  NetworkServiceClient_OnAuthRequired_Params_Data();
  ~NetworkServiceClient_OnAuthRequired_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnAuthRequired_Params_Data) == 56,
              "Bad sizeof(NetworkServiceClient_OnAuthRequired_Params_Data)");
class  NetworkServiceClient_OnCertificateRequested_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnCertificateRequested_Params_Data));
      new (data()) NetworkServiceClient_OnCertificateRequested_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnCertificateRequested_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnCertificateRequested_Params_Data>(index_);
    }
    NetworkServiceClient_OnCertificateRequested_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> window_id;
  uint32_t process_id;
  uint32_t routing_id;
  uint32_t request_id;
  uint8_t pad3_[4];
  mojo::internal::Pointer<::network::mojom::internal::SSLCertRequestInfo_Data> cert_info;

 private:
  NetworkServiceClient_OnCertificateRequested_Params_Data();
  ~NetworkServiceClient_OnCertificateRequested_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnCertificateRequested_Params_Data) == 40,
              "Bad sizeof(NetworkServiceClient_OnCertificateRequested_Params_Data)");
class  NetworkServiceClient_OnCertificateRequested_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnCertificateRequested_ResponseParams_Data));
      new (data()) NetworkServiceClient_OnCertificateRequested_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnCertificateRequested_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnCertificateRequested_ResponseParams_Data>(index_);
    }
    NetworkServiceClient_OnCertificateRequested_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::X509Certificate_Data> x509_certificate;
  mojo::internal::Pointer<mojo::internal::String_Data> provider_name;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint16_t>> algorithm_preferences;
  mojo::internal::Interface_Data ssl_private_key;
  uint8_t cancel_certificate_selection : 1;
  uint8_t padfinal_[7];

 private:
  NetworkServiceClient_OnCertificateRequested_ResponseParams_Data();
  ~NetworkServiceClient_OnCertificateRequested_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnCertificateRequested_ResponseParams_Data) == 48,
              "Bad sizeof(NetworkServiceClient_OnCertificateRequested_ResponseParams_Data)");
class  NetworkServiceClient_OnSSLCertificateError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnSSLCertificateError_Params_Data));
      new (data()) NetworkServiceClient_OnSSLCertificateError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnSSLCertificateError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnSSLCertificateError_Params_Data>(index_);
    }
    NetworkServiceClient_OnSSLCertificateError_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  int32_t net_error;
  uint8_t fatal : 1;
  uint8_t pad4_[3];
  mojo::internal::Pointer<::network::mojom::internal::SSLInfo_Data> ssl_info;

 private:
  NetworkServiceClient_OnSSLCertificateError_Params_Data();
  ~NetworkServiceClient_OnSSLCertificateError_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnSSLCertificateError_Params_Data) == 40,
              "Bad sizeof(NetworkServiceClient_OnSSLCertificateError_Params_Data)");
class  NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data));
      new (data()) NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data>(index_);
    }
    NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t padfinal_[4];

 private:
  NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data();
  ~NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data)");
class  NetworkServiceClient_OnFileUploadRequested_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnFileUploadRequested_Params_Data));
      new (data()) NetworkServiceClient_OnFileUploadRequested_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnFileUploadRequested_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnFileUploadRequested_Params_Data>(index_);
    }
    NetworkServiceClient_OnFileUploadRequested_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t process_id;
  uint8_t async : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data>>> file_paths;

 private:
  NetworkServiceClient_OnFileUploadRequested_Params_Data();
  ~NetworkServiceClient_OnFileUploadRequested_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnFileUploadRequested_Params_Data) == 24,
              "Bad sizeof(NetworkServiceClient_OnFileUploadRequested_Params_Data)");
class  NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data));
      new (data()) NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data>(index_);
    }
    NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data>>> files;

 private:
  NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data();
  ~NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data) == 24,
              "Bad sizeof(NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data)");
class  NetworkServiceClient_OnCookieChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnCookieChange_Params_Data));
      new (data()) NetworkServiceClient_OnCookieChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnCookieChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnCookieChange_Params_Data>(index_);
    }
    NetworkServiceClient_OnCookieChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t process_id;
  int32_t routing_id;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> frame_url;
  mojo::internal::Pointer<::network::mojom::internal::CanonicalCookie_Data> cookie;
  uint8_t blocked_by_policy : 1;
  uint8_t padfinal_[7];

 private:
  NetworkServiceClient_OnCookieChange_Params_Data();
  ~NetworkServiceClient_OnCookieChange_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnCookieChange_Params_Data) == 48,
              "Bad sizeof(NetworkServiceClient_OnCookieChange_Params_Data)");
class  NetworkServiceClient_OnCookiesRead_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnCookiesRead_Params_Data));
      new (data()) NetworkServiceClient_OnCookiesRead_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnCookiesRead_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnCookiesRead_Params_Data>(index_);
    }
    NetworkServiceClient_OnCookiesRead_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t process_id;
  int32_t routing_id;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> frame_url;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::CanonicalCookie_Data>>> cookie_list;
  uint8_t blocked_by_policy : 1;
  uint8_t padfinal_[7];

 private:
  NetworkServiceClient_OnCookiesRead_Params_Data();
  ~NetworkServiceClient_OnCookiesRead_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnCookiesRead_Params_Data) == 48,
              "Bad sizeof(NetworkServiceClient_OnCookiesRead_Params_Data)");
class  NetworkServiceClient_OnLoadingStateUpdate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnLoadingStateUpdate_Params_Data));
      new (data()) NetworkServiceClient_OnLoadingStateUpdate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnLoadingStateUpdate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnLoadingStateUpdate_Params_Data>(index_);
    }
    NetworkServiceClient_OnLoadingStateUpdate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::LoadInfo_Data>>> infos;

 private:
  NetworkServiceClient_OnLoadingStateUpdate_Params_Data();
  ~NetworkServiceClient_OnLoadingStateUpdate_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnLoadingStateUpdate_Params_Data) == 16,
              "Bad sizeof(NetworkServiceClient_OnLoadingStateUpdate_Params_Data)");
class  NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data));
      new (data()) NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data>(index_);
    }
    NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data();
  ~NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data)");
class  NetworkServiceClient_OnClearSiteData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnClearSiteData_Params_Data));
      new (data()) NetworkServiceClient_OnClearSiteData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnClearSiteData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnClearSiteData_Params_Data>(index_);
    }
    NetworkServiceClient_OnClearSiteData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t process_id;
  int32_t routing_id;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> header_value;
  int32_t load_flags;
  uint8_t padfinal_[4];

 private:
  NetworkServiceClient_OnClearSiteData_Params_Data();
  ~NetworkServiceClient_OnClearSiteData_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnClearSiteData_Params_Data) == 40,
              "Bad sizeof(NetworkServiceClient_OnClearSiteData_Params_Data)");
class  NetworkServiceClient_OnClearSiteData_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnClearSiteData_ResponseParams_Data));
      new (data()) NetworkServiceClient_OnClearSiteData_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnClearSiteData_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnClearSiteData_ResponseParams_Data>(index_);
    }
    NetworkServiceClient_OnClearSiteData_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceClient_OnClearSiteData_ResponseParams_Data();
  ~NetworkServiceClient_OnClearSiteData_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnClearSiteData_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkServiceClient_OnClearSiteData_ResponseParams_Data)");
class  NetworkServiceClient_OnDataUseUpdate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnDataUseUpdate_Params_Data));
      new (data()) NetworkServiceClient_OnDataUseUpdate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnDataUseUpdate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnDataUseUpdate_Params_Data>(index_);
    }
    NetworkServiceClient_OnDataUseUpdate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t network_traffic_annotation_id_hash;
  uint8_t pad0_[4];
  int64_t recv_bytes;
  int64_t sent_bytes;

 private:
  NetworkServiceClient_OnDataUseUpdate_Params_Data();
  ~NetworkServiceClient_OnDataUseUpdate_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnDataUseUpdate_Params_Data) == 32,
              "Bad sizeof(NetworkServiceClient_OnDataUseUpdate_Params_Data)");
class  NetworkService_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_SetClient_Params_Data));
      new (data()) NetworkService_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_SetClient_Params_Data>(index_);
    }
    NetworkService_SetClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;
  mojo::internal::Pointer<internal::NetworkServiceParams_Data> params;

 private:
  NetworkService_SetClient_Params_Data();
  ~NetworkService_SetClient_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_SetClient_Params_Data) == 24,
              "Bad sizeof(NetworkService_SetClient_Params_Data)");
class  NetworkService_StartNetLog_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_StartNetLog_Params_Data));
      new (data()) NetworkService_StartNetLog_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_StartNetLog_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_StartNetLog_Params_Data>(index_);
    }
    NetworkService_StartNetLog_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> file;
  int32_t capture_mode;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> constants;

 private:
  NetworkService_StartNetLog_Params_Data();
  ~NetworkService_StartNetLog_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_StartNetLog_Params_Data) == 32,
              "Bad sizeof(NetworkService_StartNetLog_Params_Data)");
class  NetworkService_SetSSLKeyLogFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_SetSSLKeyLogFile_Params_Data));
      new (data()) NetworkService_SetSSLKeyLogFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_SetSSLKeyLogFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_SetSSLKeyLogFile_Params_Data>(index_);
    }
    NetworkService_SetSSLKeyLogFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> file;

 private:
  NetworkService_SetSSLKeyLogFile_Params_Data();
  ~NetworkService_SetSSLKeyLogFile_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_SetSSLKeyLogFile_Params_Data) == 16,
              "Bad sizeof(NetworkService_SetSSLKeyLogFile_Params_Data)");
class  NetworkService_CreateNetworkContext_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_CreateNetworkContext_Params_Data));
      new (data()) NetworkService_CreateNetworkContext_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_CreateNetworkContext_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_CreateNetworkContext_Params_Data>(index_);
    }
    NetworkService_CreateNetworkContext_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data context;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::network::mojom::internal::NetworkContextParams_Data> params;

 private:
  NetworkService_CreateNetworkContext_Params_Data();
  ~NetworkService_CreateNetworkContext_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_CreateNetworkContext_Params_Data) == 24,
              "Bad sizeof(NetworkService_CreateNetworkContext_Params_Data)");
class  NetworkService_ConfigureStubHostResolver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_ConfigureStubHostResolver_Params_Data));
      new (data()) NetworkService_ConfigureStubHostResolver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_ConfigureStubHostResolver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_ConfigureStubHostResolver_Params_Data>(index_);
    }
    NetworkService_ConfigureStubHostResolver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t stub_resolver_enabled : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::DnsOverHttpsServer_Data>>> dns_over_https_servers;

 private:
  NetworkService_ConfigureStubHostResolver_Params_Data();
  ~NetworkService_ConfigureStubHostResolver_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_ConfigureStubHostResolver_Params_Data) == 24,
              "Bad sizeof(NetworkService_ConfigureStubHostResolver_Params_Data)");
class  NetworkService_DisableQuic_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_DisableQuic_Params_Data));
      new (data()) NetworkService_DisableQuic_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_DisableQuic_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_DisableQuic_Params_Data>(index_);
    }
    NetworkService_DisableQuic_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkService_DisableQuic_Params_Data();
  ~NetworkService_DisableQuic_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_DisableQuic_Params_Data) == 8,
              "Bad sizeof(NetworkService_DisableQuic_Params_Data)");
class  NetworkService_SetUpHttpAuth_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_SetUpHttpAuth_Params_Data));
      new (data()) NetworkService_SetUpHttpAuth_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_SetUpHttpAuth_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_SetUpHttpAuth_Params_Data>(index_);
    }
    NetworkService_SetUpHttpAuth_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::HttpAuthStaticParams_Data> http_auth_static_params;

 private:
  NetworkService_SetUpHttpAuth_Params_Data();
  ~NetworkService_SetUpHttpAuth_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_SetUpHttpAuth_Params_Data) == 16,
              "Bad sizeof(NetworkService_SetUpHttpAuth_Params_Data)");
class  NetworkService_ConfigureHttpAuthPrefs_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_ConfigureHttpAuthPrefs_Params_Data));
      new (data()) NetworkService_ConfigureHttpAuthPrefs_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_ConfigureHttpAuthPrefs_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_ConfigureHttpAuthPrefs_Params_Data>(index_);
    }
    NetworkService_ConfigureHttpAuthPrefs_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::HttpAuthDynamicParams_Data> http_auth_dynamic_params;

 private:
  NetworkService_ConfigureHttpAuthPrefs_Params_Data();
  ~NetworkService_ConfigureHttpAuthPrefs_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_ConfigureHttpAuthPrefs_Params_Data) == 16,
              "Bad sizeof(NetworkService_ConfigureHttpAuthPrefs_Params_Data)");
class  NetworkService_SetRawHeadersAccess_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_SetRawHeadersAccess_Params_Data));
      new (data()) NetworkService_SetRawHeadersAccess_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_SetRawHeadersAccess_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_SetRawHeadersAccess_Params_Data>(index_);
    }
    NetworkService_SetRawHeadersAccess_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t process_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Origin_Data>>> origins;

 private:
  NetworkService_SetRawHeadersAccess_Params_Data();
  ~NetworkService_SetRawHeadersAccess_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_SetRawHeadersAccess_Params_Data) == 24,
              "Bad sizeof(NetworkService_SetRawHeadersAccess_Params_Data)");
class  NetworkService_GetNetworkChangeManager_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_GetNetworkChangeManager_Params_Data));
      new (data()) NetworkService_GetNetworkChangeManager_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_GetNetworkChangeManager_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_GetNetworkChangeManager_Params_Data>(index_);
    }
    NetworkService_GetNetworkChangeManager_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data network_change_manager;
  uint8_t padfinal_[4];

 private:
  NetworkService_GetNetworkChangeManager_Params_Data();
  ~NetworkService_GetNetworkChangeManager_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_GetNetworkChangeManager_Params_Data) == 16,
              "Bad sizeof(NetworkService_GetNetworkChangeManager_Params_Data)");
class  NetworkService_GetNetworkQualityEstimatorManager_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_GetNetworkQualityEstimatorManager_Params_Data));
      new (data()) NetworkService_GetNetworkQualityEstimatorManager_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_GetNetworkQualityEstimatorManager_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_GetNetworkQualityEstimatorManager_Params_Data>(index_);
    }
    NetworkService_GetNetworkQualityEstimatorManager_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data network_quality_estimator_manager;
  uint8_t padfinal_[4];

 private:
  NetworkService_GetNetworkQualityEstimatorManager_Params_Data();
  ~NetworkService_GetNetworkQualityEstimatorManager_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_GetNetworkQualityEstimatorManager_Params_Data) == 16,
              "Bad sizeof(NetworkService_GetNetworkQualityEstimatorManager_Params_Data)");
class  NetworkService_GetDnsConfigChangeManager_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_GetDnsConfigChangeManager_Params_Data));
      new (data()) NetworkService_GetDnsConfigChangeManager_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_GetDnsConfigChangeManager_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_GetDnsConfigChangeManager_Params_Data>(index_);
    }
    NetworkService_GetDnsConfigChangeManager_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data dns_config_change_manager;
  uint8_t padfinal_[4];

 private:
  NetworkService_GetDnsConfigChangeManager_Params_Data();
  ~NetworkService_GetDnsConfigChangeManager_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_GetDnsConfigChangeManager_Params_Data) == 16,
              "Bad sizeof(NetworkService_GetDnsConfigChangeManager_Params_Data)");
class  NetworkService_GetTotalNetworkUsages_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_GetTotalNetworkUsages_Params_Data));
      new (data()) NetworkService_GetTotalNetworkUsages_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_GetTotalNetworkUsages_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_GetTotalNetworkUsages_Params_Data>(index_);
    }
    NetworkService_GetTotalNetworkUsages_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkService_GetTotalNetworkUsages_Params_Data();
  ~NetworkService_GetTotalNetworkUsages_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_GetTotalNetworkUsages_Params_Data) == 8,
              "Bad sizeof(NetworkService_GetTotalNetworkUsages_Params_Data)");
class  NetworkService_GetTotalNetworkUsages_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_GetTotalNetworkUsages_ResponseParams_Data));
      new (data()) NetworkService_GetTotalNetworkUsages_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_GetTotalNetworkUsages_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_GetTotalNetworkUsages_ResponseParams_Data>(index_);
    }
    NetworkService_GetTotalNetworkUsages_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::NetworkUsage_Data>>> total_network_usages;

 private:
  NetworkService_GetTotalNetworkUsages_ResponseParams_Data();
  ~NetworkService_GetTotalNetworkUsages_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkService_GetTotalNetworkUsages_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkService_GetTotalNetworkUsages_ResponseParams_Data)");
class  NetworkService_GetNetworkList_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_GetNetworkList_Params_Data));
      new (data()) NetworkService_GetNetworkList_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_GetNetworkList_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_GetNetworkList_Params_Data>(index_);
    }
    NetworkService_GetNetworkList_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t policy;
  uint8_t padfinal_[4];

 private:
  NetworkService_GetNetworkList_Params_Data();
  ~NetworkService_GetNetworkList_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_GetNetworkList_Params_Data) == 16,
              "Bad sizeof(NetworkService_GetNetworkList_Params_Data)");
class  NetworkService_GetNetworkList_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_GetNetworkList_ResponseParams_Data));
      new (data()) NetworkService_GetNetworkList_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_GetNetworkList_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_GetNetworkList_ResponseParams_Data>(index_);
    }
    NetworkService_GetNetworkList_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::NetworkInterface_Data>>> networks;

 private:
  NetworkService_GetNetworkList_ResponseParams_Data();
  ~NetworkService_GetNetworkList_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkService_GetNetworkList_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkService_GetNetworkList_ResponseParams_Data)");
class  NetworkService_UpdateSignedTreeHead_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_UpdateSignedTreeHead_Params_Data));
      new (data()) NetworkService_UpdateSignedTreeHead_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_UpdateSignedTreeHead_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_UpdateSignedTreeHead_Params_Data>(index_);
    }
    NetworkService_UpdateSignedTreeHead_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::SignedTreeHead_Data> signed_tree_head;

 private:
  NetworkService_UpdateSignedTreeHead_Params_Data();
  ~NetworkService_UpdateSignedTreeHead_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_UpdateSignedTreeHead_Params_Data) == 16,
              "Bad sizeof(NetworkService_UpdateSignedTreeHead_Params_Data)");
class  NetworkService_UpdateCRLSet_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_UpdateCRLSet_Params_Data));
      new (data()) NetworkService_UpdateCRLSet_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_UpdateCRLSet_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_UpdateCRLSet_Params_Data>(index_);
    }
    NetworkService_UpdateCRLSet_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlyBuffer_Data> crl_set;

 private:
  NetworkService_UpdateCRLSet_Params_Data();
  ~NetworkService_UpdateCRLSet_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_UpdateCRLSet_Params_Data) == 16,
              "Bad sizeof(NetworkService_UpdateCRLSet_Params_Data)");
class  NetworkService_OnCertDBChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_OnCertDBChanged_Params_Data));
      new (data()) NetworkService_OnCertDBChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_OnCertDBChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_OnCertDBChanged_Params_Data>(index_);
    }
    NetworkService_OnCertDBChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkService_OnCertDBChanged_Params_Data();
  ~NetworkService_OnCertDBChanged_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_OnCertDBChanged_Params_Data) == 8,
              "Bad sizeof(NetworkService_OnCertDBChanged_Params_Data)");
class  NetworkService_SetCryptConfig_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_SetCryptConfig_Params_Data));
      new (data()) NetworkService_SetCryptConfig_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_SetCryptConfig_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_SetCryptConfig_Params_Data>(index_);
    }
    NetworkService_SetCryptConfig_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CryptConfig_Data> crypt_config;

 private:
  NetworkService_SetCryptConfig_Params_Data();
  ~NetworkService_SetCryptConfig_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_SetCryptConfig_Params_Data) == 16,
              "Bad sizeof(NetworkService_SetCryptConfig_Params_Data)");
class  NetworkService_AddCorbExceptionForPlugin_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_AddCorbExceptionForPlugin_Params_Data));
      new (data()) NetworkService_AddCorbExceptionForPlugin_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_AddCorbExceptionForPlugin_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_AddCorbExceptionForPlugin_Params_Data>(index_);
    }
    NetworkService_AddCorbExceptionForPlugin_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t process_id;
  uint8_t padfinal_[4];

 private:
  NetworkService_AddCorbExceptionForPlugin_Params_Data();
  ~NetworkService_AddCorbExceptionForPlugin_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_AddCorbExceptionForPlugin_Params_Data) == 16,
              "Bad sizeof(NetworkService_AddCorbExceptionForPlugin_Params_Data)");
class  NetworkService_RemoveCorbExceptionForPlugin_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_RemoveCorbExceptionForPlugin_Params_Data));
      new (data()) NetworkService_RemoveCorbExceptionForPlugin_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_RemoveCorbExceptionForPlugin_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_RemoveCorbExceptionForPlugin_Params_Data>(index_);
    }
    NetworkService_RemoveCorbExceptionForPlugin_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t process_id;
  uint8_t padfinal_[4];

 private:
  NetworkService_RemoveCorbExceptionForPlugin_Params_Data();
  ~NetworkService_RemoveCorbExceptionForPlugin_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_RemoveCorbExceptionForPlugin_Params_Data) == 16,
              "Bad sizeof(NetworkService_RemoveCorbExceptionForPlugin_Params_Data)");
class  NetworkService_OnMemoryPressure_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_OnMemoryPressure_Params_Data));
      new (data()) NetworkService_OnMemoryPressure_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_OnMemoryPressure_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_OnMemoryPressure_Params_Data>(index_);
    }
    NetworkService_OnMemoryPressure_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t memory_pressure_level;
  uint8_t padfinal_[4];

 private:
  NetworkService_OnMemoryPressure_Params_Data();
  ~NetworkService_OnMemoryPressure_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_OnMemoryPressure_Params_Data) == 16,
              "Bad sizeof(NetworkService_OnMemoryPressure_Params_Data)");
class  NetworkService_SetEnvironment_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_SetEnvironment_Params_Data));
      new (data()) NetworkService_SetEnvironment_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_SetEnvironment_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_SetEnvironment_Params_Data>(index_);
    }
    NetworkService_SetEnvironment_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::EnvironmentVariable_Data>>> environment;

 private:
  NetworkService_SetEnvironment_Params_Data();
  ~NetworkService_SetEnvironment_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_SetEnvironment_Params_Data) == 16,
              "Bad sizeof(NetworkService_SetEnvironment_Params_Data)");

}  // namespace internal
class SSLPrivateKey_Sign_ParamsDataView {
 public:
  SSLPrivateKey_Sign_ParamsDataView() {}

  SSLPrivateKey_Sign_ParamsDataView(
      internal::SSLPrivateKey_Sign_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint16_t algorithm() const {
    return data_->algorithm;
  }
  inline void GetInputDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInput(UserType* output) {
    auto* pointer = data_->input.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::SSLPrivateKey_Sign_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SSLPrivateKey_Sign_ResponseParamsDataView {
 public:
  SSLPrivateKey_Sign_ResponseParamsDataView() {}

  SSLPrivateKey_Sign_ResponseParamsDataView(
      internal::SSLPrivateKey_Sign_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
  inline void GetSignatureDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignature(UserType* output) {
    auto* pointer = data_->signature.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::SSLPrivateKey_Sign_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AuthChallengeResponder_OnAuthCredentials_ParamsDataView {
 public:
  AuthChallengeResponder_OnAuthCredentials_ParamsDataView() {}

  AuthChallengeResponder_OnAuthCredentials_ParamsDataView(
      internal::AuthChallengeResponder_OnAuthCredentials_Params_Data* data,
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
  internal::AuthChallengeResponder_OnAuthCredentials_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnAuthRequired_ParamsDataView {
 public:
  NetworkServiceClient_OnAuthRequired_ParamsDataView() {}

  NetworkServiceClient_OnAuthRequired_ParamsDataView(
      internal::NetworkServiceClient_OnAuthRequired_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t process_id() const {
    return data_->process_id;
  }
  uint32_t routing_id() const {
    return data_->routing_id;
  }
  uint32_t request_id() const {
    return data_->request_id;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  bool first_auth_attempt() const {
    return data_->first_auth_attempt;
  }
  inline void GetAuthInfoDataView(
      ::network::mojom::AuthChallengeInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuthInfo(UserType* output) {
    auto* pointer = data_->auth_info.Get();
    return mojo::internal::Deserialize<::network::mojom::AuthChallengeInfoDataView>(
        pointer, output, context_);
  }
  inline void GetHeadDataView(
      ::network::mojom::URLResponseHeadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHead(UserType* output) {
    auto* pointer = data_->head.Get();
    return mojo::internal::Deserialize<::network::mojom::URLResponseHeadDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeAuthChallengeResponder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::AuthChallengeResponderPtrDataView>(
            &data_->auth_challenge_responder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkServiceClient_OnAuthRequired_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnCertificateRequested_ParamsDataView {
 public:
  NetworkServiceClient_OnCertificateRequested_ParamsDataView() {}

  NetworkServiceClient_OnCertificateRequested_ParamsDataView(
      internal::NetworkServiceClient_OnCertificateRequested_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetWindowIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWindowId(UserType* output) {
    auto* pointer = data_->window_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  uint32_t process_id() const {
    return data_->process_id;
  }
  uint32_t routing_id() const {
    return data_->routing_id;
  }
  uint32_t request_id() const {
    return data_->request_id;
  }
  inline void GetCertInfoDataView(
      ::network::mojom::SSLCertRequestInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCertInfo(UserType* output) {
    auto* pointer = data_->cert_info.Get();
    return mojo::internal::Deserialize<::network::mojom::SSLCertRequestInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkServiceClient_OnCertificateRequested_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnCertificateRequested_ResponseParamsDataView {
 public:
  NetworkServiceClient_OnCertificateRequested_ResponseParamsDataView() {}

  NetworkServiceClient_OnCertificateRequested_ResponseParamsDataView(
      internal::NetworkServiceClient_OnCertificateRequested_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetX509CertificateDataView(
      ::network::mojom::X509CertificateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadX509Certificate(UserType* output) {
    auto* pointer = data_->x509_certificate.Get();
    return mojo::internal::Deserialize<::network::mojom::X509CertificateDataView>(
        pointer, output, context_);
  }
  inline void GetProviderNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProviderName(UserType* output) {
    auto* pointer = data_->provider_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAlgorithmPreferencesDataView(
      mojo::ArrayDataView<uint16_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAlgorithmPreferences(UserType* output) {
    auto* pointer = data_->algorithm_preferences.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint16_t>>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSslPrivateKey() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::SSLPrivateKeyPtrDataView>(
            &data_->ssl_private_key, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool cancel_certificate_selection() const {
    return data_->cancel_certificate_selection;
  }
 private:
  internal::NetworkServiceClient_OnCertificateRequested_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnSSLCertificateError_ParamsDataView {
 public:
  NetworkServiceClient_OnSSLCertificateError_ParamsDataView() {}

  NetworkServiceClient_OnSSLCertificateError_ParamsDataView(
      internal::NetworkServiceClient_OnSSLCertificateError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t process_id() const {
    return data_->process_id;
  }
  uint32_t routing_id() const {
    return data_->routing_id;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int32_t net_error() const {
    return data_->net_error;
  }
  inline void GetSslInfoDataView(
      ::network::mojom::SSLInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSslInfo(UserType* output) {
    auto* pointer = data_->ssl_info.Get();
    return mojo::internal::Deserialize<::network::mojom::SSLInfoDataView>(
        pointer, output, context_);
  }
  bool fatal() const {
    return data_->fatal;
  }
 private:
  internal::NetworkServiceClient_OnSSLCertificateError_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnSSLCertificateError_ResponseParamsDataView {
 public:
  NetworkServiceClient_OnSSLCertificateError_ResponseParamsDataView() {}

  NetworkServiceClient_OnSSLCertificateError_ResponseParamsDataView(
      internal::NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
 private:
  internal::NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data* data_ = nullptr;
};

class NetworkServiceClient_OnFileUploadRequested_ParamsDataView {
 public:
  NetworkServiceClient_OnFileUploadRequested_ParamsDataView() {}

  NetworkServiceClient_OnFileUploadRequested_ParamsDataView(
      internal::NetworkServiceClient_OnFileUploadRequested_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t process_id() const {
    return data_->process_id;
  }
  bool async() const {
    return data_->async;
  }
  inline void GetFilePathsDataView(
      mojo::ArrayDataView<::mojo_base::mojom::FilePathDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilePaths(UserType* output) {
    auto* pointer = data_->file_paths.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::FilePathDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkServiceClient_OnFileUploadRequested_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnFileUploadRequested_ResponseParamsDataView {
 public:
  NetworkServiceClient_OnFileUploadRequested_ResponseParamsDataView() {}

  NetworkServiceClient_OnFileUploadRequested_ResponseParamsDataView(
      internal::NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
  inline void GetFilesDataView(
      mojo::ArrayDataView<::mojo_base::mojom::FileDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFiles(UserType* output) {
    auto* pointer = data_->files.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::FileDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnCookieChange_ParamsDataView {
 public:
  NetworkServiceClient_OnCookieChange_ParamsDataView() {}

  NetworkServiceClient_OnCookieChange_ParamsDataView(
      internal::NetworkServiceClient_OnCookieChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t process_id() const {
    return data_->process_id;
  }
  int32_t routing_id() const {
    return data_->routing_id;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetFrameUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameUrl(UserType* output) {
    auto* pointer = data_->frame_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetCookieDataView(
      ::network::mojom::CanonicalCookieDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookie(UserType* output) {
    auto* pointer = data_->cookie.Get();
    return mojo::internal::Deserialize<::network::mojom::CanonicalCookieDataView>(
        pointer, output, context_);
  }
  bool blocked_by_policy() const {
    return data_->blocked_by_policy;
  }
 private:
  internal::NetworkServiceClient_OnCookieChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnCookiesRead_ParamsDataView {
 public:
  NetworkServiceClient_OnCookiesRead_ParamsDataView() {}

  NetworkServiceClient_OnCookiesRead_ParamsDataView(
      internal::NetworkServiceClient_OnCookiesRead_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t process_id() const {
    return data_->process_id;
  }
  int32_t routing_id() const {
    return data_->routing_id;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetFrameUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameUrl(UserType* output) {
    auto* pointer = data_->frame_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetCookieListDataView(
      mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookieList(UserType* output) {
    auto* pointer = data_->cookie_list.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>>(
        pointer, output, context_);
  }
  bool blocked_by_policy() const {
    return data_->blocked_by_policy;
  }
 private:
  internal::NetworkServiceClient_OnCookiesRead_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnLoadingStateUpdate_ParamsDataView {
 public:
  NetworkServiceClient_OnLoadingStateUpdate_ParamsDataView() {}

  NetworkServiceClient_OnLoadingStateUpdate_ParamsDataView(
      internal::NetworkServiceClient_OnLoadingStateUpdate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfosDataView(
      mojo::ArrayDataView<LoadInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfos(UserType* output) {
    auto* pointer = data_->infos.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::LoadInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkServiceClient_OnLoadingStateUpdate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnLoadingStateUpdate_ResponseParamsDataView {
 public:
  NetworkServiceClient_OnLoadingStateUpdate_ResponseParamsDataView() {}

  NetworkServiceClient_OnLoadingStateUpdate_ResponseParamsDataView(
      internal::NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data* data_ = nullptr;
};

class NetworkServiceClient_OnClearSiteData_ParamsDataView {
 public:
  NetworkServiceClient_OnClearSiteData_ParamsDataView() {}

  NetworkServiceClient_OnClearSiteData_ParamsDataView(
      internal::NetworkServiceClient_OnClearSiteData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t process_id() const {
    return data_->process_id;
  }
  int32_t routing_id() const {
    return data_->routing_id;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetHeaderValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaderValue(UserType* output) {
    auto* pointer = data_->header_value.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t load_flags() const {
    return data_->load_flags;
  }
 private:
  internal::NetworkServiceClient_OnClearSiteData_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnClearSiteData_ResponseParamsDataView {
 public:
  NetworkServiceClient_OnClearSiteData_ResponseParamsDataView() {}

  NetworkServiceClient_OnClearSiteData_ResponseParamsDataView(
      internal::NetworkServiceClient_OnClearSiteData_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceClient_OnClearSiteData_ResponseParams_Data* data_ = nullptr;
};

class NetworkServiceClient_OnDataUseUpdate_ParamsDataView {
 public:
  NetworkServiceClient_OnDataUseUpdate_ParamsDataView() {}

  NetworkServiceClient_OnDataUseUpdate_ParamsDataView(
      internal::NetworkServiceClient_OnDataUseUpdate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t network_traffic_annotation_id_hash() const {
    return data_->network_traffic_annotation_id_hash;
  }
  int64_t recv_bytes() const {
    return data_->recv_bytes;
  }
  int64_t sent_bytes() const {
    return data_->sent_bytes;
  }
 private:
  internal::NetworkServiceClient_OnDataUseUpdate_Params_Data* data_ = nullptr;
};

class NetworkService_SetClient_ParamsDataView {
 public:
  NetworkService_SetClient_ParamsDataView() {}

  NetworkService_SetClient_ParamsDataView(
      internal::NetworkService_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::NetworkServiceClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetParamsDataView(
      NetworkServiceParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::network::mojom::NetworkServiceParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_StartNetLog_ParamsDataView {
 public:
  NetworkService_StartNetLog_ParamsDataView() {}

  NetworkService_StartNetLog_ParamsDataView(
      internal::NetworkService_StartNetLog_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFile(UserType* output) {
    auto* pointer = data_->file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCaptureMode(UserType* output) const {
    auto data_value = data_->capture_mode;
    return mojo::internal::Deserialize<::network::mojom::NetLogCaptureMode>(
        data_value, output);
  }

  ::network::mojom::NetLogCaptureMode capture_mode() const {
    return static_cast<::network::mojom::NetLogCaptureMode>(data_->capture_mode);
  }
  inline void GetConstantsDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConstants(UserType* output) {
    auto* pointer = data_->constants.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_StartNetLog_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_SetSSLKeyLogFile_ParamsDataView {
 public:
  NetworkService_SetSSLKeyLogFile_ParamsDataView() {}

  NetworkService_SetSSLKeyLogFile_ParamsDataView(
      internal::NetworkService_SetSSLKeyLogFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFileDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFile(UserType* output) {
    auto* pointer = data_->file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_SetSSLKeyLogFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_CreateNetworkContext_ParamsDataView {
 public:
  NetworkService_CreateNetworkContext_ParamsDataView() {}

  NetworkService_CreateNetworkContext_ParamsDataView(
      internal::NetworkService_CreateNetworkContext_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeContext() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::NetworkContextRequestDataView>(
            &data_->context, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetParamsDataView(
      ::network::mojom::NetworkContextParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::network::mojom::NetworkContextParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_CreateNetworkContext_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_ConfigureStubHostResolver_ParamsDataView {
 public:
  NetworkService_ConfigureStubHostResolver_ParamsDataView() {}

  NetworkService_ConfigureStubHostResolver_ParamsDataView(
      internal::NetworkService_ConfigureStubHostResolver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool stub_resolver_enabled() const {
    return data_->stub_resolver_enabled;
  }
  inline void GetDnsOverHttpsServersDataView(
      mojo::ArrayDataView<::network::mojom::DnsOverHttpsServerDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDnsOverHttpsServers(UserType* output) {
    auto* pointer = data_->dns_over_https_servers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::DnsOverHttpsServerDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_ConfigureStubHostResolver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_DisableQuic_ParamsDataView {
 public:
  NetworkService_DisableQuic_ParamsDataView() {}

  NetworkService_DisableQuic_ParamsDataView(
      internal::NetworkService_DisableQuic_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkService_DisableQuic_Params_Data* data_ = nullptr;
};

class NetworkService_SetUpHttpAuth_ParamsDataView {
 public:
  NetworkService_SetUpHttpAuth_ParamsDataView() {}

  NetworkService_SetUpHttpAuth_ParamsDataView(
      internal::NetworkService_SetUpHttpAuth_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHttpAuthStaticParamsDataView(
      HttpAuthStaticParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHttpAuthStaticParams(UserType* output) {
    auto* pointer = data_->http_auth_static_params.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpAuthStaticParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_SetUpHttpAuth_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_ConfigureHttpAuthPrefs_ParamsDataView {
 public:
  NetworkService_ConfigureHttpAuthPrefs_ParamsDataView() {}

  NetworkService_ConfigureHttpAuthPrefs_ParamsDataView(
      internal::NetworkService_ConfigureHttpAuthPrefs_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHttpAuthDynamicParamsDataView(
      HttpAuthDynamicParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHttpAuthDynamicParams(UserType* output) {
    auto* pointer = data_->http_auth_dynamic_params.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpAuthDynamicParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_ConfigureHttpAuthPrefs_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_SetRawHeadersAccess_ParamsDataView {
 public:
  NetworkService_SetRawHeadersAccess_ParamsDataView() {}

  NetworkService_SetRawHeadersAccess_ParamsDataView(
      internal::NetworkService_SetRawHeadersAccess_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t process_id() const {
    return data_->process_id;
  }
  inline void GetOriginsDataView(
      mojo::ArrayDataView<::url::mojom::OriginDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigins(UserType* output) {
    auto* pointer = data_->origins.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::OriginDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_SetRawHeadersAccess_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_GetNetworkChangeManager_ParamsDataView {
 public:
  NetworkService_GetNetworkChangeManager_ParamsDataView() {}

  NetworkService_GetNetworkChangeManager_ParamsDataView(
      internal::NetworkService_GetNetworkChangeManager_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeNetworkChangeManager() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::NetworkChangeManagerRequestDataView>(
            &data_->network_change_manager, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkService_GetNetworkChangeManager_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_GetNetworkQualityEstimatorManager_ParamsDataView {
 public:
  NetworkService_GetNetworkQualityEstimatorManager_ParamsDataView() {}

  NetworkService_GetNetworkQualityEstimatorManager_ParamsDataView(
      internal::NetworkService_GetNetworkQualityEstimatorManager_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeNetworkQualityEstimatorManager() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::NetworkQualityEstimatorManagerRequestDataView>(
            &data_->network_quality_estimator_manager, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkService_GetNetworkQualityEstimatorManager_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_GetDnsConfigChangeManager_ParamsDataView {
 public:
  NetworkService_GetDnsConfigChangeManager_ParamsDataView() {}

  NetworkService_GetDnsConfigChangeManager_ParamsDataView(
      internal::NetworkService_GetDnsConfigChangeManager_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDnsConfigChangeManager() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::DnsConfigChangeManagerRequestDataView>(
            &data_->dns_config_change_manager, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkService_GetDnsConfigChangeManager_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_GetTotalNetworkUsages_ParamsDataView {
 public:
  NetworkService_GetTotalNetworkUsages_ParamsDataView() {}

  NetworkService_GetTotalNetworkUsages_ParamsDataView(
      internal::NetworkService_GetTotalNetworkUsages_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkService_GetTotalNetworkUsages_Params_Data* data_ = nullptr;
};

class NetworkService_GetTotalNetworkUsages_ResponseParamsDataView {
 public:
  NetworkService_GetTotalNetworkUsages_ResponseParamsDataView() {}

  NetworkService_GetTotalNetworkUsages_ResponseParamsDataView(
      internal::NetworkService_GetTotalNetworkUsages_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTotalNetworkUsagesDataView(
      mojo::ArrayDataView<::network::mojom::NetworkUsageDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTotalNetworkUsages(UserType* output) {
    auto* pointer = data_->total_network_usages.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::NetworkUsageDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_GetTotalNetworkUsages_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_GetNetworkList_ParamsDataView {
 public:
  NetworkService_GetNetworkList_ParamsDataView() {}

  NetworkService_GetNetworkList_ParamsDataView(
      internal::NetworkService_GetNetworkList_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t policy() const {
    return data_->policy;
  }
 private:
  internal::NetworkService_GetNetworkList_Params_Data* data_ = nullptr;
};

class NetworkService_GetNetworkList_ResponseParamsDataView {
 public:
  NetworkService_GetNetworkList_ResponseParamsDataView() {}

  NetworkService_GetNetworkList_ResponseParamsDataView(
      internal::NetworkService_GetNetworkList_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNetworksDataView(
      mojo::ArrayDataView<::network::mojom::NetworkInterfaceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNetworks(UserType* output) {
    auto* pointer = data_->networks.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::NetworkInterfaceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_GetNetworkList_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_UpdateSignedTreeHead_ParamsDataView {
 public:
  NetworkService_UpdateSignedTreeHead_ParamsDataView() {}

  NetworkService_UpdateSignedTreeHead_ParamsDataView(
      internal::NetworkService_UpdateSignedTreeHead_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSignedTreeHeadDataView(
      ::network::mojom::SignedTreeHeadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignedTreeHead(UserType* output) {
    auto* pointer = data_->signed_tree_head.Get();
    return mojo::internal::Deserialize<::network::mojom::SignedTreeHeadDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_UpdateSignedTreeHead_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_UpdateCRLSet_ParamsDataView {
 public:
  NetworkService_UpdateCRLSet_ParamsDataView() {}

  NetworkService_UpdateCRLSet_ParamsDataView(
      internal::NetworkService_UpdateCRLSet_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCrlSetDataView(
      ::mojo_base::mojom::ReadOnlyBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCrlSet(UserType* output) {
    auto* pointer = data_->crl_set.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlyBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_UpdateCRLSet_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_OnCertDBChanged_ParamsDataView {
 public:
  NetworkService_OnCertDBChanged_ParamsDataView() {}

  NetworkService_OnCertDBChanged_ParamsDataView(
      internal::NetworkService_OnCertDBChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkService_OnCertDBChanged_Params_Data* data_ = nullptr;
};

class NetworkService_SetCryptConfig_ParamsDataView {
 public:
  NetworkService_SetCryptConfig_ParamsDataView() {}

  NetworkService_SetCryptConfig_ParamsDataView(
      internal::NetworkService_SetCryptConfig_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCryptConfigDataView(
      CryptConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCryptConfig(UserType* output) {
    auto* pointer = data_->crypt_config.Get();
    return mojo::internal::Deserialize<::network::mojom::CryptConfigDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_SetCryptConfig_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_AddCorbExceptionForPlugin_ParamsDataView {
 public:
  NetworkService_AddCorbExceptionForPlugin_ParamsDataView() {}

  NetworkService_AddCorbExceptionForPlugin_ParamsDataView(
      internal::NetworkService_AddCorbExceptionForPlugin_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t process_id() const {
    return data_->process_id;
  }
 private:
  internal::NetworkService_AddCorbExceptionForPlugin_Params_Data* data_ = nullptr;
};

class NetworkService_RemoveCorbExceptionForPlugin_ParamsDataView {
 public:
  NetworkService_RemoveCorbExceptionForPlugin_ParamsDataView() {}

  NetworkService_RemoveCorbExceptionForPlugin_ParamsDataView(
      internal::NetworkService_RemoveCorbExceptionForPlugin_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t process_id() const {
    return data_->process_id;
  }
 private:
  internal::NetworkService_RemoveCorbExceptionForPlugin_Params_Data* data_ = nullptr;
};

class NetworkService_OnMemoryPressure_ParamsDataView {
 public:
  NetworkService_OnMemoryPressure_ParamsDataView() {}

  NetworkService_OnMemoryPressure_ParamsDataView(
      internal::NetworkService_OnMemoryPressure_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMemoryPressureLevel(UserType* output) const {
    auto data_value = data_->memory_pressure_level;
    return mojo::internal::Deserialize<::mojo_base::mojom::MemoryPressureLevel>(
        data_value, output);
  }

  ::mojo_base::mojom::MemoryPressureLevel memory_pressure_level() const {
    return static_cast<::mojo_base::mojom::MemoryPressureLevel>(data_->memory_pressure_level);
  }
 private:
  internal::NetworkService_OnMemoryPressure_Params_Data* data_ = nullptr;
};

class NetworkService_SetEnvironment_ParamsDataView {
 public:
  NetworkService_SetEnvironment_ParamsDataView() {}

  NetworkService_SetEnvironment_ParamsDataView(
      internal::NetworkService_SetEnvironment_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEnvironmentDataView(
      mojo::ArrayDataView<EnvironmentVariableDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEnvironment(UserType* output) {
    auto* pointer = data_->environment.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::EnvironmentVariableDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_SetEnvironment_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void SSLPrivateKey_Sign_ParamsDataView::GetInputDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->input.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void SSLPrivateKey_Sign_ResponseParamsDataView::GetSignatureDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->signature.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void AuthChallengeResponder_OnAuthCredentials_ParamsDataView::GetCredentialsDataView(
    ::network::mojom::AuthCredentialsDataView* output) {
  auto pointer = data_->credentials.Get();
  *output = ::network::mojom::AuthCredentialsDataView(pointer, context_);
}


inline void NetworkServiceClient_OnAuthRequired_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NetworkServiceClient_OnAuthRequired_ParamsDataView::GetAuthInfoDataView(
    ::network::mojom::AuthChallengeInfoDataView* output) {
  auto pointer = data_->auth_info.Get();
  *output = ::network::mojom::AuthChallengeInfoDataView(pointer, context_);
}
inline void NetworkServiceClient_OnAuthRequired_ParamsDataView::GetHeadDataView(
    ::network::mojom::URLResponseHeadDataView* output) {
  auto pointer = data_->head.Get();
  *output = ::network::mojom::URLResponseHeadDataView(pointer, context_);
}


inline void NetworkServiceClient_OnCertificateRequested_ParamsDataView::GetWindowIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->window_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void NetworkServiceClient_OnCertificateRequested_ParamsDataView::GetCertInfoDataView(
    ::network::mojom::SSLCertRequestInfoDataView* output) {
  auto pointer = data_->cert_info.Get();
  *output = ::network::mojom::SSLCertRequestInfoDataView(pointer, context_);
}


inline void NetworkServiceClient_OnCertificateRequested_ResponseParamsDataView::GetX509CertificateDataView(
    ::network::mojom::X509CertificateDataView* output) {
  auto pointer = data_->x509_certificate.Get();
  *output = ::network::mojom::X509CertificateDataView(pointer, context_);
}
inline void NetworkServiceClient_OnCertificateRequested_ResponseParamsDataView::GetProviderNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->provider_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkServiceClient_OnCertificateRequested_ResponseParamsDataView::GetAlgorithmPreferencesDataView(
    mojo::ArrayDataView<uint16_t>* output) {
  auto pointer = data_->algorithm_preferences.Get();
  *output = mojo::ArrayDataView<uint16_t>(pointer, context_);
}


inline void NetworkServiceClient_OnSSLCertificateError_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NetworkServiceClient_OnSSLCertificateError_ParamsDataView::GetSslInfoDataView(
    ::network::mojom::SSLInfoDataView* output) {
  auto pointer = data_->ssl_info.Get();
  *output = ::network::mojom::SSLInfoDataView(pointer, context_);
}




inline void NetworkServiceClient_OnFileUploadRequested_ParamsDataView::GetFilePathsDataView(
    mojo::ArrayDataView<::mojo_base::mojom::FilePathDataView>* output) {
  auto pointer = data_->file_paths.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::FilePathDataView>(pointer, context_);
}


inline void NetworkServiceClient_OnFileUploadRequested_ResponseParamsDataView::GetFilesDataView(
    mojo::ArrayDataView<::mojo_base::mojom::FileDataView>* output) {
  auto pointer = data_->files.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::FileDataView>(pointer, context_);
}


inline void NetworkServiceClient_OnCookieChange_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NetworkServiceClient_OnCookieChange_ParamsDataView::GetFrameUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->frame_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NetworkServiceClient_OnCookieChange_ParamsDataView::GetCookieDataView(
    ::network::mojom::CanonicalCookieDataView* output) {
  auto pointer = data_->cookie.Get();
  *output = ::network::mojom::CanonicalCookieDataView(pointer, context_);
}


inline void NetworkServiceClient_OnCookiesRead_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NetworkServiceClient_OnCookiesRead_ParamsDataView::GetFrameUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->frame_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NetworkServiceClient_OnCookiesRead_ParamsDataView::GetCookieListDataView(
    mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>* output) {
  auto pointer = data_->cookie_list.Get();
  *output = mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>(pointer, context_);
}


inline void NetworkServiceClient_OnLoadingStateUpdate_ParamsDataView::GetInfosDataView(
    mojo::ArrayDataView<LoadInfoDataView>* output) {
  auto pointer = data_->infos.Get();
  *output = mojo::ArrayDataView<LoadInfoDataView>(pointer, context_);
}




inline void NetworkServiceClient_OnClearSiteData_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NetworkServiceClient_OnClearSiteData_ParamsDataView::GetHeaderValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->header_value.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void NetworkService_SetClient_ParamsDataView::GetParamsDataView(
    NetworkServiceParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = NetworkServiceParamsDataView(pointer, context_);
}


inline void NetworkService_StartNetLog_ParamsDataView::GetFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}
inline void NetworkService_StartNetLog_ParamsDataView::GetConstantsDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->constants.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}


inline void NetworkService_SetSSLKeyLogFile_ParamsDataView::GetFileDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->file.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}


inline void NetworkService_CreateNetworkContext_ParamsDataView::GetParamsDataView(
    ::network::mojom::NetworkContextParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::network::mojom::NetworkContextParamsDataView(pointer, context_);
}


inline void NetworkService_ConfigureStubHostResolver_ParamsDataView::GetDnsOverHttpsServersDataView(
    mojo::ArrayDataView<::network::mojom::DnsOverHttpsServerDataView>* output) {
  auto pointer = data_->dns_over_https_servers.Get();
  *output = mojo::ArrayDataView<::network::mojom::DnsOverHttpsServerDataView>(pointer, context_);
}




inline void NetworkService_SetUpHttpAuth_ParamsDataView::GetHttpAuthStaticParamsDataView(
    HttpAuthStaticParamsDataView* output) {
  auto pointer = data_->http_auth_static_params.Get();
  *output = HttpAuthStaticParamsDataView(pointer, context_);
}


inline void NetworkService_ConfigureHttpAuthPrefs_ParamsDataView::GetHttpAuthDynamicParamsDataView(
    HttpAuthDynamicParamsDataView* output) {
  auto pointer = data_->http_auth_dynamic_params.Get();
  *output = HttpAuthDynamicParamsDataView(pointer, context_);
}


inline void NetworkService_SetRawHeadersAccess_ParamsDataView::GetOriginsDataView(
    mojo::ArrayDataView<::url::mojom::OriginDataView>* output) {
  auto pointer = data_->origins.Get();
  *output = mojo::ArrayDataView<::url::mojom::OriginDataView>(pointer, context_);
}










inline void NetworkService_GetTotalNetworkUsages_ResponseParamsDataView::GetTotalNetworkUsagesDataView(
    mojo::ArrayDataView<::network::mojom::NetworkUsageDataView>* output) {
  auto pointer = data_->total_network_usages.Get();
  *output = mojo::ArrayDataView<::network::mojom::NetworkUsageDataView>(pointer, context_);
}




inline void NetworkService_GetNetworkList_ResponseParamsDataView::GetNetworksDataView(
    mojo::ArrayDataView<::network::mojom::NetworkInterfaceDataView>* output) {
  auto pointer = data_->networks.Get();
  *output = mojo::ArrayDataView<::network::mojom::NetworkInterfaceDataView>(pointer, context_);
}


inline void NetworkService_UpdateSignedTreeHead_ParamsDataView::GetSignedTreeHeadDataView(
    ::network::mojom::SignedTreeHeadDataView* output) {
  auto pointer = data_->signed_tree_head.Get();
  *output = ::network::mojom::SignedTreeHeadDataView(pointer, context_);
}


inline void NetworkService_UpdateCRLSet_ParamsDataView::GetCrlSetDataView(
    ::mojo_base::mojom::ReadOnlyBufferDataView* output) {
  auto pointer = data_->crl_set.Get();
  *output = ::mojo_base::mojom::ReadOnlyBufferDataView(pointer, context_);
}




inline void NetworkService_SetCryptConfig_ParamsDataView::GetCryptConfigDataView(
    CryptConfigDataView* output) {
  auto pointer = data_->crypt_config.Get();
  *output = CryptConfigDataView(pointer, context_);
}








inline void NetworkService_SetEnvironment_ParamsDataView::GetEnvironmentDataView(
    mojo::ArrayDataView<EnvironmentVariableDataView>* output) {
  auto pointer = data_->environment.Get();
  *output = mojo::ArrayDataView<EnvironmentVariableDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_PARAMS_DATA_H_