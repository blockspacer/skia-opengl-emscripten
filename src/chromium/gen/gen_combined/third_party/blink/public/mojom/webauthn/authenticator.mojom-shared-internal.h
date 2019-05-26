// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class CommonCredentialInfo_Data;
class MakeCredentialAuthenticatorResponse_Data;
class GetAssertionAuthenticatorResponse_Data;
class PublicKeyCredentialRpEntity_Data;
class PublicKeyCredentialUserEntity_Data;
class PublicKeyCredentialParameters_Data;
class CableAuthentication_Data;
class CableRegistration_Data;
class PublicKeyCredentialRequestOptions_Data;
class AuthenticatorSelectionCriteria_Data;
class PublicKeyCredentialCreationOptions_Data;
class PublicKeyCredentialDescriptor_Data;

struct AuthenticatorStatus_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
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

struct AuthenticatorTransport_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
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

struct UserVerificationRequirement_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
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

struct AttestationConveyancePreference_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
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

struct AuthenticatorAttachment_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
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

struct ProtectionPolicy_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
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

struct PublicKeyCredentialType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CommonCredentialInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CommonCredentialInfo_Data));
      new (data()) CommonCredentialInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CommonCredentialInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CommonCredentialInfo_Data>(index_);
    }
    CommonCredentialInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> raw_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> client_data_json;

 private:
  CommonCredentialInfo_Data();
  ~CommonCredentialInfo_Data() = delete;
};
static_assert(sizeof(CommonCredentialInfo_Data) == 32,
              "Bad sizeof(CommonCredentialInfo_Data)");
// Used by CommonCredentialInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CommonCredentialInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CommonCredentialInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CommonCredentialInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CommonCredentialInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CommonCredentialInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MakeCredentialAuthenticatorResponse_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MakeCredentialAuthenticatorResponse_Data));
      new (data()) MakeCredentialAuthenticatorResponse_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MakeCredentialAuthenticatorResponse_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MakeCredentialAuthenticatorResponse_Data>(index_);
    }
    MakeCredentialAuthenticatorResponse_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CommonCredentialInfo_Data> info;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> attestation_object;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> transports;
  uint8_t echo_hmac_create_secret : 1;
  uint8_t hmac_create_secret : 1;
  uint8_t padfinal_[7];

 private:
  MakeCredentialAuthenticatorResponse_Data();
  ~MakeCredentialAuthenticatorResponse_Data() = delete;
};
static_assert(sizeof(MakeCredentialAuthenticatorResponse_Data) == 40,
              "Bad sizeof(MakeCredentialAuthenticatorResponse_Data)");
// Used by MakeCredentialAuthenticatorResponse::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MakeCredentialAuthenticatorResponse_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MakeCredentialAuthenticatorResponse_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MakeCredentialAuthenticatorResponse_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MakeCredentialAuthenticatorResponse_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MakeCredentialAuthenticatorResponse_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) GetAssertionAuthenticatorResponse_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GetAssertionAuthenticatorResponse_Data));
      new (data()) GetAssertionAuthenticatorResponse_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GetAssertionAuthenticatorResponse_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GetAssertionAuthenticatorResponse_Data>(index_);
    }
    GetAssertionAuthenticatorResponse_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CommonCredentialInfo_Data> info;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> authenticator_data;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> signature;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> user_handle;
  uint8_t echo_appid_extension : 1;
  uint8_t appid_extension : 1;
  uint8_t padfinal_[7];

 private:
  GetAssertionAuthenticatorResponse_Data();
  ~GetAssertionAuthenticatorResponse_Data() = delete;
};
static_assert(sizeof(GetAssertionAuthenticatorResponse_Data) == 48,
              "Bad sizeof(GetAssertionAuthenticatorResponse_Data)");
// Used by GetAssertionAuthenticatorResponse::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GetAssertionAuthenticatorResponse_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GetAssertionAuthenticatorResponse_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GetAssertionAuthenticatorResponse_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GetAssertionAuthenticatorResponse_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GetAssertionAuthenticatorResponse_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PublicKeyCredentialRpEntity_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PublicKeyCredentialRpEntity_Data));
      new (data()) PublicKeyCredentialRpEntity_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PublicKeyCredentialRpEntity_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PublicKeyCredentialRpEntity_Data>(index_);
    }
    PublicKeyCredentialRpEntity_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> icon;

 private:
  PublicKeyCredentialRpEntity_Data();
  ~PublicKeyCredentialRpEntity_Data() = delete;
};
static_assert(sizeof(PublicKeyCredentialRpEntity_Data) == 32,
              "Bad sizeof(PublicKeyCredentialRpEntity_Data)");
// Used by PublicKeyCredentialRpEntity::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PublicKeyCredentialRpEntity_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PublicKeyCredentialRpEntity_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PublicKeyCredentialRpEntity_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PublicKeyCredentialRpEntity_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PublicKeyCredentialRpEntity_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PublicKeyCredentialUserEntity_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PublicKeyCredentialUserEntity_Data));
      new (data()) PublicKeyCredentialUserEntity_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PublicKeyCredentialUserEntity_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PublicKeyCredentialUserEntity_Data>(index_);
    }
    PublicKeyCredentialUserEntity_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> id;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> icon;
  mojo::internal::Pointer<mojo::internal::String_Data> display_name;

 private:
  PublicKeyCredentialUserEntity_Data();
  ~PublicKeyCredentialUserEntity_Data() = delete;
};
static_assert(sizeof(PublicKeyCredentialUserEntity_Data) == 40,
              "Bad sizeof(PublicKeyCredentialUserEntity_Data)");
// Used by PublicKeyCredentialUserEntity::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PublicKeyCredentialUserEntity_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PublicKeyCredentialUserEntity_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PublicKeyCredentialUserEntity_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PublicKeyCredentialUserEntity_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PublicKeyCredentialUserEntity_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PublicKeyCredentialParameters_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PublicKeyCredentialParameters_Data));
      new (data()) PublicKeyCredentialParameters_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PublicKeyCredentialParameters_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PublicKeyCredentialParameters_Data>(index_);
    }
    PublicKeyCredentialParameters_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  int32_t algorithm_identifier;

 private:
  PublicKeyCredentialParameters_Data();
  ~PublicKeyCredentialParameters_Data() = delete;
};
static_assert(sizeof(PublicKeyCredentialParameters_Data) == 16,
              "Bad sizeof(PublicKeyCredentialParameters_Data)");
// Used by PublicKeyCredentialParameters::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PublicKeyCredentialParameters_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PublicKeyCredentialParameters_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PublicKeyCredentialParameters_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PublicKeyCredentialParameters_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PublicKeyCredentialParameters_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CableAuthentication_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CableAuthentication_Data));
      new (data()) CableAuthentication_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CableAuthentication_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CableAuthentication_Data>(index_);
    }
    CableAuthentication_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t version;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> client_eid;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> authenticator_eid;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> session_pre_key;

 private:
  CableAuthentication_Data();
  ~CableAuthentication_Data() = delete;
};
static_assert(sizeof(CableAuthentication_Data) == 40,
              "Bad sizeof(CableAuthentication_Data)");
// Used by CableAuthentication::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CableAuthentication_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CableAuthentication_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CableAuthentication_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CableAuthentication_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CableAuthentication_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CableRegistration_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CableRegistration_Data));
      new (data()) CableRegistration_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CableRegistration_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CableRegistration_Data>(index_);
    }
    CableRegistration_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> versions;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> relying_party_public_key;

 private:
  CableRegistration_Data();
  ~CableRegistration_Data() = delete;
};
static_assert(sizeof(CableRegistration_Data) == 24,
              "Bad sizeof(CableRegistration_Data)");
// Used by CableRegistration::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CableRegistration_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CableRegistration_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CableRegistration_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CableRegistration_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CableRegistration_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PublicKeyCredentialRequestOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PublicKeyCredentialRequestOptions_Data));
      new (data()) PublicKeyCredentialRequestOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PublicKeyCredentialRequestOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PublicKeyCredentialRequestOptions_Data>(index_);
    }
    PublicKeyCredentialRequestOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> challenge;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> adjusted_timeout;
  mojo::internal::Pointer<mojo::internal::String_Data> relying_party_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PublicKeyCredentialDescriptor_Data>>> allow_credentials;
  int32_t user_verification;
  uint8_t pad4_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> appid;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CableAuthentication_Data>>> cable_authentication_data;

 private:
  PublicKeyCredentialRequestOptions_Data();
  ~PublicKeyCredentialRequestOptions_Data() = delete;
};
static_assert(sizeof(PublicKeyCredentialRequestOptions_Data) == 64,
              "Bad sizeof(PublicKeyCredentialRequestOptions_Data)");
// Used by PublicKeyCredentialRequestOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PublicKeyCredentialRequestOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PublicKeyCredentialRequestOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PublicKeyCredentialRequestOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PublicKeyCredentialRequestOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PublicKeyCredentialRequestOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AuthenticatorSelectionCriteria_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AuthenticatorSelectionCriteria_Data));
      new (data()) AuthenticatorSelectionCriteria_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AuthenticatorSelectionCriteria_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AuthenticatorSelectionCriteria_Data>(index_);
    }
    AuthenticatorSelectionCriteria_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t authenticator_attachment;
  uint8_t require_resident_key : 1;
  uint8_t pad1_[3];
  int32_t user_verification;
  uint8_t padfinal_[4];

 private:
  AuthenticatorSelectionCriteria_Data();
  ~AuthenticatorSelectionCriteria_Data() = delete;
};
static_assert(sizeof(AuthenticatorSelectionCriteria_Data) == 24,
              "Bad sizeof(AuthenticatorSelectionCriteria_Data)");
// Used by AuthenticatorSelectionCriteria::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AuthenticatorSelectionCriteria_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AuthenticatorSelectionCriteria_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AuthenticatorSelectionCriteria_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AuthenticatorSelectionCriteria_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AuthenticatorSelectionCriteria_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PublicKeyCredentialCreationOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PublicKeyCredentialCreationOptions_Data));
      new (data()) PublicKeyCredentialCreationOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PublicKeyCredentialCreationOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PublicKeyCredentialCreationOptions_Data>(index_);
    }
    PublicKeyCredentialCreationOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PublicKeyCredentialRpEntity_Data> relying_party;
  mojo::internal::Pointer<internal::PublicKeyCredentialUserEntity_Data> user;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> challenge;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PublicKeyCredentialParameters_Data>>> public_key_parameters;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> adjusted_timeout;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PublicKeyCredentialDescriptor_Data>>> exclude_credentials;
  mojo::internal::Pointer<internal::AuthenticatorSelectionCriteria_Data> authenticator_selection;
  int32_t attestation;
  uint8_t hmac_create_secret : 1;
  uint8_t enforce_protection_policy : 1;
  uint8_t pad9_[3];
  mojo::internal::Pointer<internal::CableRegistration_Data> cable_registration_data;
  int32_t protection_policy;
  uint8_t padfinal_[4];

 private:
  PublicKeyCredentialCreationOptions_Data();
  ~PublicKeyCredentialCreationOptions_Data() = delete;
};
static_assert(sizeof(PublicKeyCredentialCreationOptions_Data) == 88,
              "Bad sizeof(PublicKeyCredentialCreationOptions_Data)");
// Used by PublicKeyCredentialCreationOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PublicKeyCredentialCreationOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PublicKeyCredentialCreationOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PublicKeyCredentialCreationOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PublicKeyCredentialCreationOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PublicKeyCredentialCreationOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PublicKeyCredentialDescriptor_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PublicKeyCredentialDescriptor_Data));
      new (data()) PublicKeyCredentialDescriptor_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PublicKeyCredentialDescriptor_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PublicKeyCredentialDescriptor_Data>(index_);
    }
    PublicKeyCredentialDescriptor_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> id;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> transports;

 private:
  PublicKeyCredentialDescriptor_Data();
  ~PublicKeyCredentialDescriptor_Data() = delete;
};
static_assert(sizeof(PublicKeyCredentialDescriptor_Data) == 32,
              "Bad sizeof(PublicKeyCredentialDescriptor_Data)");
// Used by PublicKeyCredentialDescriptor::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PublicKeyCredentialDescriptor_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PublicKeyCredentialDescriptor_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PublicKeyCredentialDescriptor_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PublicKeyCredentialDescriptor_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PublicKeyCredentialDescriptor_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_SHARED_INTERNAL_H_