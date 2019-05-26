// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_PARAMS_DATA_H_

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
namespace blink {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Authenticator_MakeCredential_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Authenticator_MakeCredential_Params_Data));
      new (data()) Authenticator_MakeCredential_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Authenticator_MakeCredential_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Authenticator_MakeCredential_Params_Data>(index_);
    }
    Authenticator_MakeCredential_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PublicKeyCredentialCreationOptions_Data> options;

 private:
  Authenticator_MakeCredential_Params_Data();
  ~Authenticator_MakeCredential_Params_Data() = delete;
};
static_assert(sizeof(Authenticator_MakeCredential_Params_Data) == 16,
              "Bad sizeof(Authenticator_MakeCredential_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Authenticator_MakeCredential_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Authenticator_MakeCredential_ResponseParams_Data));
      new (data()) Authenticator_MakeCredential_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Authenticator_MakeCredential_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Authenticator_MakeCredential_ResponseParams_Data>(index_);
    }
    Authenticator_MakeCredential_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::MakeCredentialAuthenticatorResponse_Data> credential;

 private:
  Authenticator_MakeCredential_ResponseParams_Data();
  ~Authenticator_MakeCredential_ResponseParams_Data() = delete;
};
static_assert(sizeof(Authenticator_MakeCredential_ResponseParams_Data) == 24,
              "Bad sizeof(Authenticator_MakeCredential_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Authenticator_GetAssertion_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Authenticator_GetAssertion_Params_Data));
      new (data()) Authenticator_GetAssertion_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Authenticator_GetAssertion_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Authenticator_GetAssertion_Params_Data>(index_);
    }
    Authenticator_GetAssertion_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PublicKeyCredentialRequestOptions_Data> options;

 private:
  Authenticator_GetAssertion_Params_Data();
  ~Authenticator_GetAssertion_Params_Data() = delete;
};
static_assert(sizeof(Authenticator_GetAssertion_Params_Data) == 16,
              "Bad sizeof(Authenticator_GetAssertion_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Authenticator_GetAssertion_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Authenticator_GetAssertion_ResponseParams_Data));
      new (data()) Authenticator_GetAssertion_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Authenticator_GetAssertion_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Authenticator_GetAssertion_ResponseParams_Data>(index_);
    }
    Authenticator_GetAssertion_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::GetAssertionAuthenticatorResponse_Data> credential;

 private:
  Authenticator_GetAssertion_ResponseParams_Data();
  ~Authenticator_GetAssertion_ResponseParams_Data() = delete;
};
static_assert(sizeof(Authenticator_GetAssertion_ResponseParams_Data) == 24,
              "Bad sizeof(Authenticator_GetAssertion_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data));
      new (data()) Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data>(index_);
    }
    Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data();
  ~Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data() = delete;
};
static_assert(sizeof(Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data) == 8,
              "Bad sizeof(Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data));
      new (data()) Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data>(index_);
    }
    Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t available : 1;
  uint8_t padfinal_[7];

 private:
  Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data();
  ~Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data() = delete;
};
static_assert(sizeof(Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data) == 16,
              "Bad sizeof(Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Authenticator_Cancel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Authenticator_Cancel_Params_Data));
      new (data()) Authenticator_Cancel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Authenticator_Cancel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Authenticator_Cancel_Params_Data>(index_);
    }
    Authenticator_Cancel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Authenticator_Cancel_Params_Data();
  ~Authenticator_Cancel_Params_Data() = delete;
};
static_assert(sizeof(Authenticator_Cancel_Params_Data) == 8,
              "Bad sizeof(Authenticator_Cancel_Params_Data)");

}  // namespace internal
class Authenticator_MakeCredential_ParamsDataView {
 public:
  Authenticator_MakeCredential_ParamsDataView() {}

  Authenticator_MakeCredential_ParamsDataView(
      internal::Authenticator_MakeCredential_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      PublicKeyCredentialCreationOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::PublicKeyCredentialCreationOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::Authenticator_MakeCredential_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Authenticator_MakeCredential_ResponseParamsDataView {
 public:
  Authenticator_MakeCredential_ResponseParamsDataView() {}

  Authenticator_MakeCredential_ResponseParamsDataView(
      internal::Authenticator_MakeCredential_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::AuthenticatorStatus>(
        data_value, output);
  }

  AuthenticatorStatus status() const {
    return static_cast<AuthenticatorStatus>(data_->status);
  }
  inline void GetCredentialDataView(
      MakeCredentialAuthenticatorResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCredential(UserType* output) {
    auto* pointer = data_->credential.Get();
    return mojo::internal::Deserialize<::blink::mojom::MakeCredentialAuthenticatorResponseDataView>(
        pointer, output, context_);
  }
 private:
  internal::Authenticator_MakeCredential_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Authenticator_GetAssertion_ParamsDataView {
 public:
  Authenticator_GetAssertion_ParamsDataView() {}

  Authenticator_GetAssertion_ParamsDataView(
      internal::Authenticator_GetAssertion_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      PublicKeyCredentialRequestOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::PublicKeyCredentialRequestOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::Authenticator_GetAssertion_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Authenticator_GetAssertion_ResponseParamsDataView {
 public:
  Authenticator_GetAssertion_ResponseParamsDataView() {}

  Authenticator_GetAssertion_ResponseParamsDataView(
      internal::Authenticator_GetAssertion_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::AuthenticatorStatus>(
        data_value, output);
  }

  AuthenticatorStatus status() const {
    return static_cast<AuthenticatorStatus>(data_->status);
  }
  inline void GetCredentialDataView(
      GetAssertionAuthenticatorResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCredential(UserType* output) {
    auto* pointer = data_->credential.Get();
    return mojo::internal::Deserialize<::blink::mojom::GetAssertionAuthenticatorResponseDataView>(
        pointer, output, context_);
  }
 private:
  internal::Authenticator_GetAssertion_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ParamsDataView {
 public:
  Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ParamsDataView() {}

  Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ParamsDataView(
      internal::Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data* data_ = nullptr;
};

class Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParamsDataView {
 public:
  Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParamsDataView() {}

  Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParamsDataView(
      internal::Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool available() const {
    return data_->available;
  }
 private:
  internal::Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data* data_ = nullptr;
};

class Authenticator_Cancel_ParamsDataView {
 public:
  Authenticator_Cancel_ParamsDataView() {}

  Authenticator_Cancel_ParamsDataView(
      internal::Authenticator_Cancel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Authenticator_Cancel_Params_Data* data_ = nullptr;
};


inline void Authenticator_MakeCredential_ParamsDataView::GetOptionsDataView(
    PublicKeyCredentialCreationOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = PublicKeyCredentialCreationOptionsDataView(pointer, context_);
}


inline void Authenticator_MakeCredential_ResponseParamsDataView::GetCredentialDataView(
    MakeCredentialAuthenticatorResponseDataView* output) {
  auto pointer = data_->credential.Get();
  *output = MakeCredentialAuthenticatorResponseDataView(pointer, context_);
}


inline void Authenticator_GetAssertion_ParamsDataView::GetOptionsDataView(
    PublicKeyCredentialRequestOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = PublicKeyCredentialRequestOptionsDataView(pointer, context_);
}


inline void Authenticator_GetAssertion_ResponseParamsDataView::GetCredentialDataView(
    GetAssertionAuthenticatorResponseDataView* output) {
  auto pointer = data_->credential.Get();
  *output = GetAssertionAuthenticatorResponseDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_PARAMS_DATA_H_