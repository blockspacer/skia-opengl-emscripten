// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class OriginPolicyContents_Data;
class OriginPolicy_Data;

struct OriginPolicyState_Data {
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

#pragma pack(push, 1)
class  OriginPolicyContents_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OriginPolicyContents_Data));
      new (data()) OriginPolicyContents_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OriginPolicyContents_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OriginPolicyContents_Data>(index_);
    }
    OriginPolicyContents_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> features;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> content_security_policies;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> content_security_policies_report_only;

 private:
  OriginPolicyContents_Data();
  ~OriginPolicyContents_Data() = delete;
};
static_assert(sizeof(OriginPolicyContents_Data) == 32,
              "Bad sizeof(OriginPolicyContents_Data)");
// Used by OriginPolicyContents::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct OriginPolicyContents_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  OriginPolicyContents_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~OriginPolicyContents_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    OriginPolicyContents_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    OriginPolicyContents_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  OriginPolicy_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OriginPolicy_Data));
      new (data()) OriginPolicy_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OriginPolicy_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OriginPolicy_Data>(index_);
    }
    OriginPolicy_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t state;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> policy_url;
  mojo::internal::Pointer<internal::OriginPolicyContents_Data> contents;

 private:
  OriginPolicy_Data();
  ~OriginPolicy_Data() = delete;
};
static_assert(sizeof(OriginPolicy_Data) == 32,
              "Bad sizeof(OriginPolicy_Data)");
// Used by OriginPolicy::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct OriginPolicy_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  OriginPolicy_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~OriginPolicy_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    OriginPolicy_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    OriginPolicy_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_SHARED_INTERNAL_H_