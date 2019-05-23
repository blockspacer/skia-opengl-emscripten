// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_PARAMS_DATA_H_

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
class  NetworkServiceTest_AddRules_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_AddRules_Params_Data));
      new (data()) NetworkServiceTest_AddRules_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_AddRules_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_AddRules_Params_Data>(index_);
    }
    NetworkServiceTest_AddRules_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Rule_Data>>> rules;

 private:
  NetworkServiceTest_AddRules_Params_Data();
  ~NetworkServiceTest_AddRules_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_AddRules_Params_Data) == 16,
              "Bad sizeof(NetworkServiceTest_AddRules_Params_Data)");
class  NetworkServiceTest_AddRules_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_AddRules_ResponseParams_Data));
      new (data()) NetworkServiceTest_AddRules_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_AddRules_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_AddRules_ResponseParams_Data>(index_);
    }
    NetworkServiceTest_AddRules_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_AddRules_ResponseParams_Data();
  ~NetworkServiceTest_AddRules_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_AddRules_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkServiceTest_AddRules_ResponseParams_Data)");
class  NetworkServiceTest_SimulateNetworkChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_SimulateNetworkChange_Params_Data));
      new (data()) NetworkServiceTest_SimulateNetworkChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_SimulateNetworkChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_SimulateNetworkChange_Params_Data>(index_);
    }
    NetworkServiceTest_SimulateNetworkChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  NetworkServiceTest_SimulateNetworkChange_Params_Data();
  ~NetworkServiceTest_SimulateNetworkChange_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_SimulateNetworkChange_Params_Data) == 16,
              "Bad sizeof(NetworkServiceTest_SimulateNetworkChange_Params_Data)");
class  NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data));
      new (data()) NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data>(index_);
    }
    NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data();
  ~NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data)");
class  NetworkServiceTest_SimulateNetworkQualityChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_SimulateNetworkQualityChange_Params_Data));
      new (data()) NetworkServiceTest_SimulateNetworkQualityChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_SimulateNetworkQualityChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_SimulateNetworkQualityChange_Params_Data>(index_);
    }
    NetworkServiceTest_SimulateNetworkQualityChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  NetworkServiceTest_SimulateNetworkQualityChange_Params_Data();
  ~NetworkServiceTest_SimulateNetworkQualityChange_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_SimulateNetworkQualityChange_Params_Data) == 16,
              "Bad sizeof(NetworkServiceTest_SimulateNetworkQualityChange_Params_Data)");
class  NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data));
      new (data()) NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data>(index_);
    }
    NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data();
  ~NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data)");
class  NetworkServiceTest_SimulateCrash_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_SimulateCrash_Params_Data));
      new (data()) NetworkServiceTest_SimulateCrash_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_SimulateCrash_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_SimulateCrash_Params_Data>(index_);
    }
    NetworkServiceTest_SimulateCrash_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_SimulateCrash_Params_Data();
  ~NetworkServiceTest_SimulateCrash_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_SimulateCrash_Params_Data) == 8,
              "Bad sizeof(NetworkServiceTest_SimulateCrash_Params_Data)");
class  NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data));
      new (data()) NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data>(index_);
    }
    NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t default_result;
  uint8_t padfinal_[4];

 private:
  NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data();
  ~NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data) == 16,
              "Bad sizeof(NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data)");
class  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data));
      new (data()) NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data>(index_);
    }
    NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data();
  ~NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data)");
class  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data));
      new (data()) NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data>(index_);
    }
    NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::X509Certificate_Data> cert;
  mojo::internal::Pointer<mojo::internal::String_Data> host_pattern;
  mojo::internal::Pointer<::network::mojom::internal::CertVerifyResult_Data> verify_result;
  int32_t rv;
  uint8_t padfinal_[4];

 private:
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data();
  ~NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data) == 40,
              "Bad sizeof(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data)");
class  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data));
      new (data()) NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data>(index_);
    }
    NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data();
  ~NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data)");
class  NetworkServiceTest_SetShouldRequireCT_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_SetShouldRequireCT_Params_Data));
      new (data()) NetworkServiceTest_SetShouldRequireCT_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_SetShouldRequireCT_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_SetShouldRequireCT_Params_Data>(index_);
    }
    NetworkServiceTest_SetShouldRequireCT_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t required;
  uint8_t padfinal_[4];

 private:
  NetworkServiceTest_SetShouldRequireCT_Params_Data();
  ~NetworkServiceTest_SetShouldRequireCT_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_SetShouldRequireCT_Params_Data) == 16,
              "Bad sizeof(NetworkServiceTest_SetShouldRequireCT_Params_Data)");
class  NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data));
      new (data()) NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data>(index_);
    }
    NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data();
  ~NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data)");
class  NetworkServiceTest_SetTransportSecurityStateSource_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_SetTransportSecurityStateSource_Params_Data));
      new (data()) NetworkServiceTest_SetTransportSecurityStateSource_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_SetTransportSecurityStateSource_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_SetTransportSecurityStateSource_Params_Data>(index_);
    }
    NetworkServiceTest_SetTransportSecurityStateSource_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint16_t reporting_port;
  uint8_t padfinal_[6];

 private:
  NetworkServiceTest_SetTransportSecurityStateSource_Params_Data();
  ~NetworkServiceTest_SetTransportSecurityStateSource_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_SetTransportSecurityStateSource_Params_Data) == 16,
              "Bad sizeof(NetworkServiceTest_SetTransportSecurityStateSource_Params_Data)");
class  NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data));
      new (data()) NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data>(index_);
    }
    NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data();
  ~NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data)");
class  NetworkServiceTest_CrashOnResolveHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_CrashOnResolveHost_Params_Data));
      new (data()) NetworkServiceTest_CrashOnResolveHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_CrashOnResolveHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_CrashOnResolveHost_Params_Data>(index_);
    }
    NetworkServiceTest_CrashOnResolveHost_Params_Data* operator->() { return data(); }

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
  NetworkServiceTest_CrashOnResolveHost_Params_Data();
  ~NetworkServiceTest_CrashOnResolveHost_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_CrashOnResolveHost_Params_Data) == 16,
              "Bad sizeof(NetworkServiceTest_CrashOnResolveHost_Params_Data)");
class  NetworkServiceTest_CrashOnGetCookieList_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_CrashOnGetCookieList_Params_Data));
      new (data()) NetworkServiceTest_CrashOnGetCookieList_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_CrashOnGetCookieList_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_CrashOnGetCookieList_Params_Data>(index_);
    }
    NetworkServiceTest_CrashOnGetCookieList_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_CrashOnGetCookieList_Params_Data();
  ~NetworkServiceTest_CrashOnGetCookieList_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_CrashOnGetCookieList_Params_Data) == 8,
              "Bad sizeof(NetworkServiceTest_CrashOnGetCookieList_Params_Data)");
class  NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data));
      new (data()) NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data>(index_);
    }
    NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data();
  ~NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data) == 8,
              "Bad sizeof(NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data)");
class  NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data));
      new (data()) NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data>(index_);
    }
    NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data* operator->() { return data(); }

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
  NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data();
  ~NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data)");
class  NetworkServiceTest_GetEnvironmentVariableValue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_GetEnvironmentVariableValue_Params_Data));
      new (data()) NetworkServiceTest_GetEnvironmentVariableValue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_GetEnvironmentVariableValue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_GetEnvironmentVariableValue_Params_Data>(index_);
    }
    NetworkServiceTest_GetEnvironmentVariableValue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;

 private:
  NetworkServiceTest_GetEnvironmentVariableValue_Params_Data();
  ~NetworkServiceTest_GetEnvironmentVariableValue_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_GetEnvironmentVariableValue_Params_Data) == 16,
              "Bad sizeof(NetworkServiceTest_GetEnvironmentVariableValue_Params_Data)");
class  NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data));
      new (data()) NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data>(index_);
    }
    NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> value;

 private:
  NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data();
  ~NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data)");

}  // namespace internal
class NetworkServiceTest_AddRules_ParamsDataView {
 public:
  NetworkServiceTest_AddRules_ParamsDataView() {}

  NetworkServiceTest_AddRules_ParamsDataView(
      internal::NetworkServiceTest_AddRules_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRulesDataView(
      mojo::ArrayDataView<RuleDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRules(UserType* output) {
    auto* pointer = data_->rules.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::RuleDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkServiceTest_AddRules_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceTest_AddRules_ResponseParamsDataView {
 public:
  NetworkServiceTest_AddRules_ResponseParamsDataView() {}

  NetworkServiceTest_AddRules_ResponseParamsDataView(
      internal::NetworkServiceTest_AddRules_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_AddRules_ResponseParams_Data* data_ = nullptr;
};

class NetworkServiceTest_SimulateNetworkChange_ParamsDataView {
 public:
  NetworkServiceTest_SimulateNetworkChange_ParamsDataView() {}

  NetworkServiceTest_SimulateNetworkChange_ParamsDataView(
      internal::NetworkServiceTest_SimulateNetworkChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::ConnectionType>(
        data_value, output);
  }

  ::network::mojom::ConnectionType type() const {
    return static_cast<::network::mojom::ConnectionType>(data_->type);
  }
 private:
  internal::NetworkServiceTest_SimulateNetworkChange_Params_Data* data_ = nullptr;
};

class NetworkServiceTest_SimulateNetworkChange_ResponseParamsDataView {
 public:
  NetworkServiceTest_SimulateNetworkChange_ResponseParamsDataView() {}

  NetworkServiceTest_SimulateNetworkChange_ResponseParamsDataView(
      internal::NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data* data_ = nullptr;
};

class NetworkServiceTest_SimulateNetworkQualityChange_ParamsDataView {
 public:
  NetworkServiceTest_SimulateNetworkQualityChange_ParamsDataView() {}

  NetworkServiceTest_SimulateNetworkQualityChange_ParamsDataView(
      internal::NetworkServiceTest_SimulateNetworkQualityChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::EffectiveConnectionType>(
        data_value, output);
  }

  ::network::mojom::EffectiveConnectionType type() const {
    return static_cast<::network::mojom::EffectiveConnectionType>(data_->type);
  }
 private:
  internal::NetworkServiceTest_SimulateNetworkQualityChange_Params_Data* data_ = nullptr;
};

class NetworkServiceTest_SimulateNetworkQualityChange_ResponseParamsDataView {
 public:
  NetworkServiceTest_SimulateNetworkQualityChange_ResponseParamsDataView() {}

  NetworkServiceTest_SimulateNetworkQualityChange_ResponseParamsDataView(
      internal::NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data* data_ = nullptr;
};

class NetworkServiceTest_SimulateCrash_ParamsDataView {
 public:
  NetworkServiceTest_SimulateCrash_ParamsDataView() {}

  NetworkServiceTest_SimulateCrash_ParamsDataView(
      internal::NetworkServiceTest_SimulateCrash_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_SimulateCrash_Params_Data* data_ = nullptr;
};

class NetworkServiceTest_MockCertVerifierSetDefaultResult_ParamsDataView {
 public:
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ParamsDataView() {}

  NetworkServiceTest_MockCertVerifierSetDefaultResult_ParamsDataView(
      internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t default_result() const {
    return data_->default_result;
  }
 private:
  internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data* data_ = nullptr;
};

class NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParamsDataView {
 public:
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParamsDataView() {}

  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParamsDataView(
      internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data* data_ = nullptr;
};

class NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ParamsDataView {
 public:
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ParamsDataView() {}

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ParamsDataView(
      internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCertDataView(
      ::network::mojom::X509CertificateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCert(UserType* output) {
    auto* pointer = data_->cert.Get();
    return mojo::internal::Deserialize<::network::mojom::X509CertificateDataView>(
        pointer, output, context_);
  }
  inline void GetHostPatternDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostPattern(UserType* output) {
    auto* pointer = data_->host_pattern.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetVerifyResultDataView(
      ::network::mojom::CertVerifyResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVerifyResult(UserType* output) {
    auto* pointer = data_->verify_result.Get();
    return mojo::internal::Deserialize<::network::mojom::CertVerifyResultDataView>(
        pointer, output, context_);
  }
  int32_t rv() const {
    return data_->rv;
  }
 private:
  internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParamsDataView {
 public:
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParamsDataView() {}

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParamsDataView(
      internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data* data_ = nullptr;
};

class NetworkServiceTest_SetShouldRequireCT_ParamsDataView {
 public:
  NetworkServiceTest_SetShouldRequireCT_ParamsDataView() {}

  NetworkServiceTest_SetShouldRequireCT_ParamsDataView(
      internal::NetworkServiceTest_SetShouldRequireCT_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequired(UserType* output) const {
    auto data_value = data_->required;
    return mojo::internal::Deserialize<::network::mojom::NetworkServiceTest_ShouldRequireCT>(
        data_value, output);
  }

  NetworkServiceTest_ShouldRequireCT required() const {
    return static_cast<NetworkServiceTest_ShouldRequireCT>(data_->required);
  }
 private:
  internal::NetworkServiceTest_SetShouldRequireCT_Params_Data* data_ = nullptr;
};

class NetworkServiceTest_SetShouldRequireCT_ResponseParamsDataView {
 public:
  NetworkServiceTest_SetShouldRequireCT_ResponseParamsDataView() {}

  NetworkServiceTest_SetShouldRequireCT_ResponseParamsDataView(
      internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data* data_ = nullptr;
};

class NetworkServiceTest_SetTransportSecurityStateSource_ParamsDataView {
 public:
  NetworkServiceTest_SetTransportSecurityStateSource_ParamsDataView() {}

  NetworkServiceTest_SetTransportSecurityStateSource_ParamsDataView(
      internal::NetworkServiceTest_SetTransportSecurityStateSource_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint16_t reporting_port() const {
    return data_->reporting_port;
  }
 private:
  internal::NetworkServiceTest_SetTransportSecurityStateSource_Params_Data* data_ = nullptr;
};

class NetworkServiceTest_SetTransportSecurityStateSource_ResponseParamsDataView {
 public:
  NetworkServiceTest_SetTransportSecurityStateSource_ResponseParamsDataView() {}

  NetworkServiceTest_SetTransportSecurityStateSource_ResponseParamsDataView(
      internal::NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data* data_ = nullptr;
};

class NetworkServiceTest_CrashOnResolveHost_ParamsDataView {
 public:
  NetworkServiceTest_CrashOnResolveHost_ParamsDataView() {}

  NetworkServiceTest_CrashOnResolveHost_ParamsDataView(
      internal::NetworkServiceTest_CrashOnResolveHost_Params_Data* data,
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
  internal::NetworkServiceTest_CrashOnResolveHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceTest_CrashOnGetCookieList_ParamsDataView {
 public:
  NetworkServiceTest_CrashOnGetCookieList_ParamsDataView() {}

  NetworkServiceTest_CrashOnGetCookieList_ParamsDataView(
      internal::NetworkServiceTest_CrashOnGetCookieList_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_CrashOnGetCookieList_Params_Data* data_ = nullptr;
};

class NetworkServiceTest_GetLatestMemoryPressureLevel_ParamsDataView {
 public:
  NetworkServiceTest_GetLatestMemoryPressureLevel_ParamsDataView() {}

  NetworkServiceTest_GetLatestMemoryPressureLevel_ParamsDataView(
      internal::NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data* data_ = nullptr;
};

class NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParamsDataView {
 public:
  NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParamsDataView() {}

  NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParamsDataView(
      internal::NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data* data,
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
  internal::NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data* data_ = nullptr;
};

class NetworkServiceTest_GetEnvironmentVariableValue_ParamsDataView {
 public:
  NetworkServiceTest_GetEnvironmentVariableValue_ParamsDataView() {}

  NetworkServiceTest_GetEnvironmentVariableValue_ParamsDataView(
      internal::NetworkServiceTest_GetEnvironmentVariableValue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkServiceTest_GetEnvironmentVariableValue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceTest_GetEnvironmentVariableValue_ResponseParamsDataView {
 public:
  NetworkServiceTest_GetEnvironmentVariableValue_ResponseParamsDataView() {}

  NetworkServiceTest_GetEnvironmentVariableValue_ResponseParamsDataView(
      internal::NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void NetworkServiceTest_AddRules_ParamsDataView::GetRulesDataView(
    mojo::ArrayDataView<RuleDataView>* output) {
  auto pointer = data_->rules.Get();
  *output = mojo::ArrayDataView<RuleDataView>(pointer, context_);
}


















inline void NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ParamsDataView::GetCertDataView(
    ::network::mojom::X509CertificateDataView* output) {
  auto pointer = data_->cert.Get();
  *output = ::network::mojom::X509CertificateDataView(pointer, context_);
}
inline void NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ParamsDataView::GetHostPatternDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host_pattern.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ParamsDataView::GetVerifyResultDataView(
    ::network::mojom::CertVerifyResultDataView* output) {
  auto pointer = data_->verify_result.Get();
  *output = ::network::mojom::CertVerifyResultDataView(pointer, context_);
}












inline void NetworkServiceTest_CrashOnResolveHost_ParamsDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}








inline void NetworkServiceTest_GetEnvironmentVariableValue_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NetworkServiceTest_GetEnvironmentVariableValue_ResponseParamsDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_PARAMS_DATA_H_